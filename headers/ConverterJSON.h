#ifndef CONVERTER_JSON_H
#define CONVERTER_JSON_H

#include <vector>
#include <string>
#include <nlohmann/json.hpp>

class ConverterJSON {
public:
    ConverterJSON() = default;

    std::vector<std::string> GetTextDocuments();

    int GetResponsesLimit();

    std::vector<std::string> GetRequests();

    void putAnswers(const std::vector<std::vector<std::pair<int, float>>>& answers);

    nlohmann::json readJSON(const std::string& filename);  // Переместили в public

private:

};

#endif // CONVERTER_JSON_H
