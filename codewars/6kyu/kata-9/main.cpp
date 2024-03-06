#include <iostream>
#include <string>

std::string highestScoringWord(const std::string &str)
{
    // takes in a sentence and returns the word with the highest score
    // each letter is worth its position in the alphabet

    int highestScore{0};
    std::string highestWord{""};

    int score{0};
    std::string word{""};
    for (char c : str)
    {
        if (c == ' ')
        {
            if (score > highestScore)
            {
                highestScore = score;
                highestWord = word;
            }
            word = "";
            score = 0;
        }
        else
        {
            word += c;
            score += c - 96; // a = 97
        }
    }
    if (score > highestScore)
    {
        highestScore = score;
        highestWord = word;
    }
    return highestWord.empty() ? word : highestWord;
}

int main()
{
    std::string testSentence{"This is a test sentence with random words and zzzz"};
    std::string result = highestScoringWord(testSentence);
    std::cout << result << std::endl;
    return 0;
}