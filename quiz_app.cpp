#include <iostream>

#include <string>

#include <map>

int main() {

std::map<std::string, std::string> questions{

{"What is the capital of Kenya?", "Nairobi"},

{"What is 2 + 2?", "4"},

{"What color is the sky?", "blue"}

};

int score = 0;

for (const auto& [question, answer] : questions) {

std::string user_answer;

std::cout << question << " ";

std::getline(std::cin, user_answer);

if (user_answer == answer) {

score++;

}

}

std::cout << "You scored " << score << "/" << questions.size() << std::endl;

return 0;

}