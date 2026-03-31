# Electromagnetism Numerical Simulation Library
### Developed by Abinash Limboo | Department of Physics, Sikkim University

This repository contains a comprehensive collection of numerical solvers for the fundamental laws of Electromagnetism. Each law is implemented in 1D, 2D, and 3D to visualize field distributions and magnitudes using computational methods.

---

## 🚀 Laws Implemented

### 1. Gauss's Law
* **1D/2D/3D:** Calculates the Electric Field ($E$) for various charge distributions.
* **Method:** Numerical integration of flux and charge density.

### 2. Ampere's Law
* **1D/2D/3D:** Simulates the Magnetic Field ($B$) around current-carrying conductors.
* **Method:** Solving for curl and closed-loop integrals.

### 3. Biot-Savart Law
* **1D/2D/3D:** Calculates the magnetic field contribution from infinitesimal wire segments.
* **Application:** Circular loops, straight wires, and complex geometries.

### 4. Coulomb's Law
* **1D/2D/3D:** Interaction between point charges and the resulting vector fields.

---

## 🛠️ Tools & Technologies
* **Language:** C++ (for core numerical calculations)
* **IDE:** Code::Blocks
* **Visualization:** Gnuplot (for vector fields and magnitude plots)

---

## 📊 How to Run
1. Open the desired `.cpp` file in **Code::Blocks**.
2. Compile and Run to generate the data output (e.g., `biot1d.txt`).
3. Use **Gnuplot** to visualize the results:
   ```gnuplot
   plot "data.txt" with lines
   # OR for 2D/3D vectors
   plot "data.txt" using 1:2:3:4 with vectors

