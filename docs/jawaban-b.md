### Jawaban Bagian B :

### ***No 1***: 
<ol type="a">
    <li><i>class</i>:adalah sebuah node atau blueprint yang didalamnya ada atribut dan fungsi contoh class drone yang memiliki artibut speed,elevation,name
        <i>object</i>: adalah sebuah instance dari sebuah class sebagai contoh drone obj1,obj1 adalah objek dari class drone
        <i>abstraction</i>: menyembunyikan detail implementasi dan hanya menampilkan fitur penting
        <i>inheritance</i>: adalah membuat class baru bedasarkan class yang sudah ada
        <i>polymorphism</i>: adalah kemampuan objek untuk memiliki banyak perilaku/bentuk.
    <li>pattern yang digunakan adalah pattern factory,kenapa?karena masih terstruktur sehingga tidak memerlukan metode gabungan + objeknya centralized + parsing logicnya ga di client mode dan merapihkan kode yang sudah ada source:<a href="/src/soal-1/telemetry_processor.cpp"><code>jawaban soal no-1b</code></a>
</ol>

### ***No 2***: 
<ol type="a">
    <li><code>#include</code>berfungsi untuk mengimport library sesuatu untuk file c/cpp lalu perbedaan antara <code>#include &someting</code> <code>#include "something" </code> adalah cara compiler mencari lib nya untuk yang memakai & compiler biasa mencari di system include path dan jika pakai "" biasanya compiler mencari lib nya di folder dimana cpp file diletakan.
    <li><code>#ifdef</code> = if defined :akan aktif ketika sebagai contoh <code>#ifdef NGETEST</code> NGETEST di definisikan
        <code>#ifndef</code> = if not defined : akan aktif ketika sebagai contoh <code>#ifdef NGETEST</code> NGETEST belum di definisikan
        <code>#param once</code></i> = file ini hanya boleh diproses sekali
    <li><code>#define</code> dan <code>using</code> perbedaannya berada pada:kalau define itu preprossesingnya dari ifdef/ifndef sedangkan using bukan 
    <li> cara kerja pointerdan address of : address of (&) digunakan untukmengambil alamat memori dan pointer(*) diguankan untuk menyimpan alamat dan mengakses nilai di alamat tersebut
    <li> Konsep pass by value dan pass by reference: pass by value:Nilai dikopi ke parameter fungsi dan dan pass by reference parameter merujuk langsung ke variabel asli.
    <li> keduanya adalah smart pointer tetapi ada perbedaan yaitu untuk unique_ptr memiliki kepemilikan tunggal/exclusive ownership sedangkan shared_ptr memiliki kepemilikian bersama.
</ol>

### ***No 3***: 
<ol type="a">
    <li> konsep dasar multitreading:
    - Setiap thread dapat mengeksekusi bagian kode yang berbeda
    -Digunakan untuk meningkatkan responsivitas dan efisiensi
    -Thread berbagi memori yang sama
    -Perlu mekanisme sinkronisasi (mutex, lock) untuk mencegah race condition
    <li>hasil pengerjaan/source code:<a href="/src/soal-3/"><code>jawaban soal-3b</code></a>
</ol>

### ***No 4***: 
<ol type="a">
    <li> pada fule pipeline_parser file header memakai param once sehingga hanya bisa di proses sekali sedangkan untuk vision_to_marvos memakai ifndef lalu perbedaan berikutnya karena vision_to_marvos memakai ifndec maka diakhiri dengan endif,lalu perbedaan berikutnya adalah di vision_to_marvos 
    <li>hasil pengerjaan/source code:<a href="/src/soal-4/"><code>jawaban soal-4b</code></a>
</ol>

### ****---------------Firmware dan Sistem Benam---------------****  

### ***No 1 Firmware dan Sistem Benam***: 
firmware adalah perangkat lunak level rendah yang tertanam permanen di hardware untuk mengontrol fungsi dasar sementara software adalah program fleksibel untuk tugas spesifik yang diinstal user.

 ### ***No 2 Firmware dan Sistem Benam***: 
RTOS adalah sistem operasi yang dirancang untuk menjamin bahwa tugas-tugas (task) dieksekusi dalam batas waktu tertentu (deadline). Fokus utama RTOS bukan kecepatan rata-rata, melainkan ketepatan waktu (determinisme).
Mengapa penting di sistem UAV:
<ol type="a">
    <li>Stabilisasi dan Kontrol Penerbangan
    <li>Manajemen Sensor Real-Time
    <li>Respons Cepat terhadap Kejadian Kritis
    <li>Task Paralel yang Terkontrol
    <li>Keandalan dan Keselamatan Sistem
</ol>

 ### ***No 3 Firmware dan Sistem Benam***: 
 <ol type="a">
    <li>UART:
    <ol type="a">
        <li>Konsep Dasar:Komunikasi Asinkron,menggunakan 2 jalur data (RX,TX)
        <li>Karakteristik:Point to point,sederhana dan fleksibel
    </ol>
    <li>SPI:
    <ol type="a">
        <li>Konsep Dasar:Komunikasi sinkron,menggunakan 4 jalur data (MOSI,MISO,SCK.CS/SS),menggunakan master-slave
        <li>Karakteristik:kecepatan tinggi,full duplek dan setiap slave membutuhkan cs sendiri
    </ol>
    <li>SPI:
    <ol type="a">
        <li>Konsep Dasar:Komunikasi sinkron,menggunakan 2 jalur data (SDA,SCL),mendukung multimaster dan multislave,setiap perangkat punya alamay
        <li>Karakteristik:hemat pin,kecepatan sedang,banyak device di satu bus
    </ol>
</ol>

### ****---------------ConCept---------------****  

### ***No 1 ConCept*** : 
<li> Nodes: Nodes dalam ROS adalah sebuah proses/sub part dari droneyang kita buat
<li>Topics: mekanisme oleh nodes untuk bertukar data secara asinkron
<li> Services: services berguna agar robot/drone melakukan aksi tertentu dan disimpan dalam format .srv
<li>Parameter: Nilai konfigurasi dari node
<li>Actions:aksi adalah sebuah kominikasi task tertentu dan terdiri dari 3 part yaitu goal,feedback dan result

### ***No 2 ConCept***:
hasil pengerjaan/source code:<a href="/src/soal-2-and-3-ConCept/"><code>jawaban soal no 2 </code></a>
### ***No 3 ConCept***:
hasil pengerjaan/source code:<a href="/src/soal-2-and-3-ConCept/"><code>jawaban soal no 3</code></a>
### ***No 4 ConCept***:
### ***No 5 ConCept***:
hasil pengerjaan/source code:<a href="/src/soal-5-ConCept/"><code>jawaban soal no 5 </code></a>
### ***No 6 ConCept***:
hasil pengerjaan/source code:<a href="/src/soal-6-ConCept/"><code>jawaban soal no 6 </code></a>
### ****--------------- GCS ---------------****  
### ***No 1 GCS***:
 <ol type="a">
    <li>Struktur pesan MAVLink:
    MAVLink menggunakan format pesan yang ringkas dan terstruktur agar efisien dikirim lewat komunikasi serial atau radio
    Setiap pesan MAVLink umumnya terdiri dari:
    <ol type="i">
        <li>Header:berisi informasi awal seperti versi MAVLink, panjang payload, System ID, Component ID, dan Message ID.
        <li>Payload:data utama yang dikirim (misalnya posisi UAV, status baterai, atau perintah kontrol).
        <li>Checksum (CRC): digunakan untuk memastikan data yang diterima tidak rusak selama transmisi.
    </ol>
    <li> System ID dan Component ID:
    <ol type="i">
        <li> System ID digunakan untuk mengidentifikasi kendaraan atau sistem tertentu, misalnya satu UAV di antara banyak UAV.
        <li>Component ID digunakan untuk mengidentifikasi bagian di dalam sistem tersebut, seperti autopilot, kamera, GPS, atau GCS.
    </ol>
    <li>Cara kerja sistem heartbeat dalam MAVLink:
    Pesan heartbeat adalah pesan yang dikirim secara periodik oleh setiap sistem MAVLink (UAV maupun GCS).
    Fungsinya:
    <ol type="i">
        <li>Menandakan bahwa sistem masih aktif dan terhubung
        <li>Menginformasikan jenis sistem, mode penerbangan, dan status dasar UAV
    </ol>
    <li>Jenis-jenis pesan MAVLink yang umum digunakan:
    Beberapa pesan MAVLink yang sering digunakan dalam sistem UAV antara lain:
    <ol type="a">
        <li>Heartbeat:memantau status dan konektivitas sistem
        <li>Status Sistem
        <li>Telemetry:data posisi, kecepatan, orientasi
        <li>Command:perintah dari GCS ke UAV seperti takeoff, landing, atau perubahan mode
        <li>Mission:pengiriman dan pengelolaan waypoint atau misi penerbangan
    </ol>
 </ol>


### ***No 2 GCS***:
Diagram:
<a href="/assets/ssno2gcs_a.png"><code>ssno2gcs_a.png</code></a>
Cara Kerja Antar Komponen
 <ol type="a">
    <li>Pengguna melakukan aksi di client
    <li>Client mengirim request ke backend melalui HTTP/HTTPS.
    <li>Backend memproses request dan meminta/menyimpan data ke database jika diperlukan.
    <li>Database mengirimkan hasil ke backend.
    <li>Backend mengirim response ke client.
    <li>Client menampilkan hasil ke pengguna.
 </ol>

### ***No 3 GCS***:
 <ol type="a">
    <li>Perbedaan antara container dan virtual machine:Virtual Machine menjalankan satu sistem operasi lengkap di atas hypervisor. Setiap VM punya kernel sendiri, sehingga membutuhkan resource (RAM, storage, CPU) yang lebih besar dan waktu boot lebih lama,Container (misalnya Docker) tidak membawa OS sendiri, tetapi berbagi kernel dengan host. Aplikasi dijalankan bersama dependensinya dalam lingkungan terisolasi yang ringan.
    <li>Cara kerja Dockerfile:
    Dockerfile adalah file teks berisi instruksi untuk membangun sebuah Docker image.
    cara kerjanya:
    <ol type="a">
        <li>Docker membaca Dockerfile baris demi baris.
        <li>setiap instruksi (seperti FROM, RUN, COPY, CMD) membentuk layer image.
        <li>layer-layer ini digabung menjadi satu image yang bisa dijalankan sebagai container.
    </ol>
    <li>Manfaat menggunakan Docker dalam pengembangan aplikasi web GCS
    Penggunaan Docker pada aplikasi web Ground Control Station (GCS) memberikan beberapa manfaat utama:
    <ol type="a">
        <li>konsistensi lingkungan: aplikasi GCS berjalan sama di laptop developer, server, maupun cloud.
        <li>mudah deployment: cukup jalankan container tanpa konfigurasi ulang sistem.
        <li>Isolasi dependensi: library, framework, dan tool GCS tidak bentrok dengan sistem lain.
        <li>Skalabilitas: mudah menjalankan banyak instance GCS untuk testing atau multi-UAV.
        <li>Mendukung kolaborasi tim: semua developer memakai environment yang sama.
    </ol>
 </ol>

### ***No 4 GCS***:
hasil pengerjaan/source code:<a href="/src/soal-4-GCS/"><code>jawaban soal no 4 </code></a>

 ### ***No 5 GCS***:

Gambaran umum arsitektur: 

<a href="/assets/ssno2gcs_a.png"><code>ssno2gcs_a.png</code></a>
<ol type="a">
    <li>Frontend (React/Vite): menampilkan data telemetri, form input misi, tombol kontrol UAV.
    <li>Backend (FastAPI): bertindak sebagai jembatan antara aplikasi web dan UAV.
    <li>MAVLink: protokol komunikasi UAV standar. Bisa menggunakan UDP, TCP, atau serial.
    <li>UAV: mengirim telemetri (GPS, altitude, battery, speed) dan menerima perintah (waypoint, arm, disarm, dll).
</ol>

Langkah-Langkah Menghubungkan Aplikasi Web dengan UAV:
<ol type="a">
    <li>Hubungkan Backend dengan UAV
    <li>Integrasikan dengan Backend (FastAPI)
    <li>Frontend (React)
</ol>
Jenis MAVLink Messages yang Digunakan:
<ol type="a">
    <li><code>GLOBAL_POSITION_INT</code> : Posisi UAV
    <li><code>VFR_HUD</code>:Kecepatan UAV
    <li><code>BATTERY_STATUS</code>:Status baterai
    <li><code>COMMAND_LONG (MAV_CMD_COMPONENT_ARM_DISARM)</code>:Arm / Disarm
    <li><code>MISSION_ITEM / MISSION_COUNT / MISSION_REQUEST</code>:Waypoints / Misi
</ol>
Alur Data Telemetri:
<ol type="a">
    <li>UAV → MAVLink → Backend → JSON → Frontend → tampil di tabel/chart
    <li>Frontend → HTTP POST → Backend → MAVLink → UAV → eksekusi perintah
</li>
