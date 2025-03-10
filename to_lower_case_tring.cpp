std::string toLowerCase(std::string word){
  /*It converts an entire strin in lower case*/
    short length = word.length();
    std::string result = "";
    char letter;
    for (short i = 0; i < length; i++){
        letter = word[i];
        letter = static_cast<char>(tolower(letter));
        result += letter;
    }
    return result;
}
