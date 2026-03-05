# Contributing

## Workflow
1. Fork the repository.
2. Create a feature branch.
3. Make focused changes with clear commit messages.
4. Run local build checks before opening a pull request.
5. Open a PR with summary, rationale, and test notes.

## Coding Guidelines
- Use C++17-compatible code.
- Keep class responsibilities clear and focused.
- Prefer descriptive names over abbreviations.
- Avoid mixing input/output logic with core business logic when extending the project.

## Pull Request Checklist
- [ ] Builds successfully with `g++ -std=c++17 -Wall -Wextra -pedantic src/main.cpp -o skyhigh`
- [ ] No compiler warnings introduced
- [ ] Documentation updated for behavior changes
- [ ] Change is scoped and includes rationale
