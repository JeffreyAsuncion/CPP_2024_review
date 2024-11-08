#include <iostream>

using namespace std;

int main()
{
    string phrase = "Giraffe Academy";
    cout << phrase << endl;
    cout << "phrase.length() = " << phrase.length() << endl;
    cout << "phrase[0] = " << phrase[0] << endl;
    cout << "phrase[2] = " << phrase[2] << endl;
    
    phrase[0] = 'B';
    cout << "phrase = " << phrase << endl;
    
    cout << "phrase.find('Academny') = " << phrase.find("Academy") << endl;

    string phrasesub; 
    phrasesub = phrase.substr(8, 3);
    cout << "phrasesub = " << phrasesub << endl;

    return 0;
}
