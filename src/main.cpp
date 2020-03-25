#include <iostream>

using namespace std;

int main()
{
    bool blnContinue = true;

    int intNumTerms = 0;
    cout << "Enter the number of Terms: ";
    cin >> intNumTerms;
    while(cin.fail())
    {
        cin.clear();
        string strError = "";
        cin >> strError;
        cerr << "Invalid integer. Please Try Again: ";
        cin >> intNumTerms;
    }

    do
    {
        system("cls");
        cout << "A) Generate Triangular Number Sequence." << endl
             << "B) Calculate the Product of n Triangular numbers." << endl
             << "C) Generate the Inverse of a word." << endl
             << "X) Exit." << endl
             << "Selection: ";
        char chSelection = '\0';
        cin >> chSelection;

        switch(chSelection)
        {
        case 'A':
        case 'a':
            for(int a = 1; a <= intNumTerms; a++)
            {
                int intSequence = 0;

                intSequence += a * (a + 1) /2;

                cout << intSequence << endl;
            }
            break;

        case 'B':
        case 'b':
        {
            int intSequence = 1;
            for(int a = 1; a <= intNumTerms; a++)
            {

                intSequence *= a * (a + 1) /2;

            }
            cout << intSequence << endl;
        }
        break;

        case 'C':
        case 'c':
        {
            string strWord = "";
            cout << "Enter word: ";
            cin >> strWord;
            for(char chC : strWord)
            {

                if (isupper(chC))
                {
                    chC = (tolower(chC));
                }
                else
                {
                    chC = (toupper(chC));
                }
                cout << chC ;
            }


            cout << endl;
        }
        break;

        case 'x':
        case 'X':
            blnContinue = false;
            break;

        default:
            cerr << "Invalid selection, retry" << endl;

        }
        system("pause");
    }
    while(blnContinue);
}
