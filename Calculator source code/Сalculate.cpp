#include "exprtk.hpp"
#include <string>

std::string calculateAnswer(std::string resultString)
{
    try
    {
        std::string expression = resultString;

        exprtk::expression<double> expr;
        exprtk::parser<double> parser;

        parser.compile(expression, expr);

        double result = expr.value();

        resultString = std::to_string(result);

        resultString.erase(resultString.find_last_not_of('0') + 1, std::string::npos);

        if (resultString[resultString.size() - 1] == '.') {
            resultString.erase(resultString.size() - 1);
        }

        return resultString;
    }
    catch (const std::exception&)
    {
        return "Error";
    }
}