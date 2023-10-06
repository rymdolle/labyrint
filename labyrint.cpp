/// Copyright 2023 Olle Mattsson
///
///  Licensed under the Apache License, Version 2.0 (the "License");
///  you may not use this file except in compliance with the License.
///  You may obtain a copy of the License at
///
///      http://www.apache.org/licenses/LICENSE-2.0
///
///  Unless required by applicable law or agreed to in writing, software
///  distributed under the License is distributed on an "AS IS" BASIS,
///  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
///  See the License for the specific language governing permissions and
///  limitations under the License.

#include <iostream>
#include <vector>
#include <ctime>

int main() {
  // Give the RNG a starting value
  std::srand(std::time(nullptr));

  // Insert maze glyphs in a vector
  std::vector<const char*> glyphs = {
    "\u00A0", //  space
    "\u2554", //  ╔
    "\u2557", //  ╗
    "\u255A", //  ╚
    "\u255D", //  ╝
    "\u2550", //  ═
    "\u2551", //  ║
    "\u2560", //  ╠
    "\u2563", //  ╣
    "\u2566", //  ╦
    "\u2569", //  ╩
    "\u256C", //  ╬
  };

  int width, height;
  // Ask for maze dimensions
  std::cout << "Enter maze width:  ";
  std::cin >> width;
  std::cout << "Enter maze height: ";
  std::cin >> height;

  for (size_t index = 0; index < width * height; index++) {
    // Add a new line after each row
    if (index % width == 0 && index > 0)
      std::cout << std::endl;

    // Print random glyph
    std::cout << glyphs[std::rand() % glyphs.size()];
  }

  std::cout << std::endl;
}
