### Jawaban Bagian A :

### ***No 1***: 
    [../assets/ssno1.png](../assets/ssno1.png)
### ***No 2***:
<ol type="a">
    <li>1.git clone:berfungsi untuk mengclone repo kedalam vscode
        2.git add:menambahkan perubahan yang nantinya akan di commit
        3.git pull:mengupdate perubahan yang terdapat pada repo pada branch ataupun main bedasarkan commit terbaru
        4.git merge:menggabungkan 2 branch ke dalam satu perubahan
    <li> 
    <li> 
    <li> 
    <li> 
</ol>

### ***No 3***:
<ol type="a">
    <li>
    <li>Fitur Utama:
    1. Flight Planning: Mengatur misi terbang otomatis
    2. Telemetry : Monitoring UAV real time
    3. Parameter Tuning: konfigurasi dan kalibrasi sistem
    4. Map and Geofencing: Navigasi dan keamanan kendaraan.

    <li>
### ***No 5***:
<ol type="a"> 
    <li>Klarifikasinya:
    *** a. VTOL: ***
    - mekanisme:gaya angkat berasal dari baling baling.bisa lepas landas dan mendarat secara vertikal dan hover(diam di udara)
    - karakteristik:sangat manuver,cocok area sempit,konsumsi energi tinggi
    -jangkauan dan enduranse relatif pendek
    -aplikasi:inspeksi,fotografi udara,pemetaan area kecil
    *** b.HTOL: *** 
    -mekanisme:gaya angkat dihasilkan oleh sayap saat UAV bergerak maju,membutuhkan runway atau launcher
    -karakterisitik:efisiensi energi tinggi,jarak tempuh jauh,tidak bisa hover,manuver terbatas
    -aplikasi:pemetaan area luas,survey pertanian,long range surveilance
    *** c.Hybrid UAV: ***
    - mekanisme:kombinasi rotary wing untuk lepas landas,fixed wing untuk cruise
    - karakteristik: fleksibel,lebih kompleks secara mekanik dan kontrol
    - aplikasi: pemetaan luas tanpa runway,operasi di medan yang sulit
    <li>Konsep Gerak dan Parameter Navigasi UAV
    *** 1.Roll, Pitch, Yaw: *** 
    - Roll → rotasi terhadap sumbu memanjang (kiri–kanan)
    - Pitch → rotasi terhadap sumbu lateral (naik–turun)
    -Yaw → rotasi terhadap sumbu vertikal (arah hadap)
    *** 2. Air Speed vs Ground Speed: ***
    - Air speed → kecepatan UAV relatif terhadap udara
    - Ground speed → kecepatan UAV relatif terhadap tanah
    Hubungan:
    Ground Speed = Air Speed + Wind Velocity
    *** 3. HDOP (Horizontal Dilution of Precision) ***
    - Mengukur kualitas geometri satelit GPS
    - Nilai kecil → akurasi posisi horizontal tinggi
    - Nilai besar → posisi kurang presisi
    *** 4. RSSI (Received Signal Strength Indicator) ***
    - Mengukur kekuatan sinyal komunikasi
    - Digunakan untuk:Monitoring link UAV–GCS,Fail-safe (Return to Launch)
    <li>Komponen UAV dan Diagram Blok (Misi Pemetaan)
    *** Komponen Utama :***
    - Flight Controller:
        - Otak UAV
        - Menjalankan kontrol PID, EKF, navigasi
    - Sensor:
        - IMU (gyro, accelerometer)
        - GPS
        - Magnetometer
        - Barometer
    - Propulsion System:
        -Motor
        -ESC
        -Propeller
    -Power System:
        -Baterai
        -Power Distribution Board
    -Communication:
        -Telemetry radio
        -RC receiver
    -Payload (Pemetaan):
       - Kamera
       - Gimbal
       - Data storage
</ol>   

### ***No 6***:
<ol type="a"> 
    <li>A*: adalah sebuah algoritma pathfinding dengan sistem shortest distance f = g+ h dengan g adalah jarak sebenarnya dari node ke flag dan h adalah jarak estimasi cost dari node flag biasanya pakai manhatan distanse (|x-xg|+|y-yg|) nah biasanya prosesnya dari camera(scan objek sekitar)-> detect obstacle ->lalu buat parse ke opencv -> buat grid map-> lalu jalankan A* bedasarkan gridmap.
    <li>D*:D* sendiri merupakan algoritma dinamic A* dengan alur goal->start beda dengan A* yang alurnya start->goal. 
    <li>PID dalam bahasa sederhanyanya metode kontrol umpa balik/feedback control untuk mencapai target sexara stabil dan cepat 
    <li>Kalman FIlter adalah algoritma estimasi keadaan biasa dipakai untuk menghubungkan data sensro yang bising(noise) agar kita dapat perkiraan kondisi yang lebih akurat. alurnya menebak keadaan sekrang -> mengoreksi tebakan dengan sensor -> ulangi.
</ol>