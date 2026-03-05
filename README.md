# Sky High Airlines Management System

A C++ mini-project that models an airline reservation workflow using object-oriented programming (OOP) concepts.

This repository is a GitHub-ready, documented version of the original academic project report for **Airlines Management System - SKY HIGH AIRLINES**.

## Table of Contents
- [Project Summary](#project-summary)
- [Features](#features)
- [Tech Stack](#tech-stack)
- [Quick Start](#quick-start)
- [Repository Structure](#repository-structure)
- [OOP Concepts Demonstrated](#oop-concepts-demonstrated)
- [Known Limitations](#known-limitations)
- [Roadmap](#roadmap)
- [Documentation Index](#documentation-index)
- [Team](#team)

## Project Summary
The system demonstrates a complete reservation journey:
- user login/profile creation
- airplane and schedule creation
- meal and special requirement selection
- booking confirmation and cancellation

The codebase is intentionally class-oriented for educational use and maps directly to OOP design concepts taught in coursework.

## Features
- User profile management (`User`)
- Airplane metadata and pricing (`Airplane`)
- Flight schedule capture (`FlightSchedule`)
- Meal preference handling (`MealOption`)
- Special assistance handling (`SpecialRequirement`)
- Reservation lifecycle management (`ReservationSystem`)

## Tech Stack
- Language: C++17
- Build tool: `g++` or any C++17-compatible compiler
- Runtime: terminal/console application

## Quick Start
### 1. Compile
```bash
g++ -std=c++17 -Wall -Wextra -pedantic src/main.cpp -o skyhigh
```

### 2. Run
```bash
./skyhigh
```

For a full setup guide, see [docs/SETUP_AND_RUN.md](./docs/SETUP_AND_RUN.md).

## Repository Structure
```text
skyhigh-airlines-management-system/
├── src/
│   └── main.cpp
├── docs/
│   ├── ARCHITECTURE.md
│   ├── CLASS_REFERENCE.md
│   ├── PROJECT_SCOPE.md
│   ├── PUBLISH_TO_GITHUB.md
│   └── SETUP_AND_RUN.md
├── report/
│   └── mini-project-report-original.docx
├── .gitignore
├── CODE_OF_CONDUCT.md
├── CONTRIBUTING.md
├── LICENSE
├── SECURITY.md
├── CHANGELOG.md
└── README.md
```

## OOP Concepts Demonstrated
- Encapsulation of user, flight, meal, and booking state
- Multilevel inheritance (`User -> Airplane -> FlightSchedule`)
- Multiple inheritance (`ReservationSystem` using `FlightSchedule`, `MealOption`, `SpecialRequirement`)
- Constructor-based ID generation for key entities

## Known Limitations
- Data is in-memory only (no database persistence)
- Minimal input validation and authentication logic
- Single-session console flow (no role separation or concurrency)
- No automated tests yet

## Roadmap
- Add menu-driven navigation and robust validation
- Replace random IDs with deterministic unique IDs
- Add file/database persistence
- Introduce unit tests and CI checks
- Separate domain logic from input/output layer

## Documentation Index
- Architecture: [docs/ARCHITECTURE.md](./docs/ARCHITECTURE.md)
- Class reference: [docs/CLASS_REFERENCE.md](./docs/CLASS_REFERENCE.md)
- Setup and run: [docs/SETUP_AND_RUN.md](./docs/SETUP_AND_RUN.md)
- Scope: [docs/PROJECT_SCOPE.md](./docs/PROJECT_SCOPE.md)
- Publish steps: [docs/PUBLISH_TO_GITHUB.md](./docs/PUBLISH_TO_GITHUB.md)

## Team
Original project contributors (from report):
- L005 - Ruturaj Bannatti
- L009 - Pranav Bhoj
- L019 - Ritwik Goyal
- L020 - Aaryan Harsora

## References
- E. Balagurusamy, *Object Oriented Programming with C++*, 8th Edition, McGraw-Hill, 2023.
- Original project report included in `report/`.
