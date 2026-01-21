#pragma once

#include "common_types.hpp"
#include <string>
#include <vector>

/**
 * @file pipeline_parser.cpp
 * @brief Melakukan Parsing pipeline dengan uav_vision
 * @author Faris Wirakusuam
 * @date 2026-01-20
 */

/**
 * @namespace uav_vision 
 * @brief berisi fungsi fungsi untuk melakukan vision pada uav
 */

namespace uav_vision {

  /**
   * @class PipelineParser berfungsi untuk melakukan parsing
   * @brief Kelas untuk operasi matematika sederhana.
   */
  class PipelineParser {
    public:
      PipelineParser() = default;
      ~PipelineParser() = default;

      /**
       * @brief melakukan parsing pipeline dari sebuah file.
       * @param filename input file yang akan di parsing
       * @param nodes input vektor node pipeline
       * @return true jika parsing berhasil,false jika terjadi kesalahan I/O pada filename
       */
      bool parsePipelineFile(const std::string &filename, std::vector<PipelineNode> &nodes);
      /**
       * @brief melakukan parsing pipeline dari string
       * @param pipelineText input text pipe line
       * @param nodes input data vektor node pipeline 
       * @return true jika parsing berhasil,false jika string invalid
       */
      bool parsePipelineString(const std::string &pipelineText, std::vector<PipelineNode> &nodes);
      /**
       * @brief melakukan validasi oada vektor node pipeline
       * @param nodes input data vektor node pipeline 
       * @return true jika parsing berhasil,false jika string invalid
       */
      bool validatePipeline(const std::vector<PipelineNode> &nodes);

    private:
      /**
       * @brief melakukan parsing pipeline dari node pipeline
       * @param line input line yang ingin di parsing
       * @param nodes input data vektor node pipeline 
       * @return true jika berhasil parsing pipeline node false jika line atau pipelinenode invalid
       */
      bool parsePipelineNode(const std::string &line, PipelineNode &node);
      /**
       * @brief mengubah/membuat pipeline parameter dari paramStr
       * @param paramStr input string parameter yang ingin di parsing
       * @return Pipelineparams yang dihasilkan dari input paramstr
       */
      PipelineParams parseParameters(const std::string &paramStr);
      /**
       * @brief melakukan parsing framelist
       * @param frameStr input frame list
       * @return vector berisi substring dari hasil parsing framelist
       */
      std::vector<std::string> parseFrameList(const std::string &frameStr);
      /**
       * @brief mendeteksi circular dependesi dari pipeline nodes
       * @param nodes input node vektor pipeline
       * @return true jika node vector pipeline terdeteksi circular depencency
       */
      bool detectCircularDependency(const std::vector<PipelineNode> &nodes);
      /**
       * @brief melakukan triming string
       * @param str input string yang akan di triming
       * @return string berupa hasil triming dari str
       */
      std::string trim(const std::string &str);
      /**
       * @brief melakukan spliting character dari string
       * @param str input string yang akan di spliting
       * @param delimeter input character yang akan di split dari str
       * @return vector berisi substring hasil pemisahan
       */
      std::vector<std::string> split(const std::string &str, char delimiter);
      /**
       * @brief melakukan pengecekan apakah str adalah numerik
       * @param str input string yang akan di cel
       * @return true jika string valid dan merupakan integer false jika tidak
       */
      bool isNumeric(const std::string &str);
      /**
       * @brief melakukan pengecekan apakah str adalah float 
       * @param str input string yang akan di cek
       * @return true jika string valid dan merupakan flaoat false jika tidak 
       */
      bool isFloat(const std::string &str);
  };
} 
