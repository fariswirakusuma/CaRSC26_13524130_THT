#pragma once
#include <string>
#include <stdexcept>
#include <chrono>
#include <sstream>
#include <iomanip>

struct DurationRequest {
    std::string start_time;
    std::string end_time;
};

struct DurationResponse {
    std::string iso_duration;
};

struct DurationService {
    static DurationResponse compute(const DurationRequest &req) {
        std::tm tm_start = {};
        std::tm tm_end   = {};
        std::istringstream(req.start_time) >> std::get_time(&tm_start, "%Y-%m-%dT%H:%M:%S");
        std::istringstream(req.end_time)   >> std::get_time(&tm_end,   "%Y-%m-%dT%H:%M:%S");

        auto t_start = std::chrono::system_clock::from_time_t(std::mktime(&tm_start));
        auto t_end   = std::chrono::system_clock::from_time_t(std::mktime(&tm_end));

        if (t_start > t_end) {
            throw std::runtime_error("start_time is later than end_time!");
        }

        auto diff = std::chrono::duration_cast<std::chrono::seconds>(t_end - t_start);
        int hours = diff.count() / 3600;
        int minutes = (diff.count() % 3600) / 60;
        int seconds = diff.count() % 60;

        DurationResponse res;
        res.iso_duration = "PT" + std::to_string(hours) + "H" + std::to_string(minutes) + "M" + std::to_string(seconds) + "S";
        return res;
    }
};
