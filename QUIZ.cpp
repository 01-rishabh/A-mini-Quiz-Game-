#include <bits/stdc++.h>

using namespace std;

void pattern(char a, int b)
{
    int i;
    for (i = 0; i < b; i++)
    {
        cout << a;
    }
    cout << "\n";
}

/* Here play() function contains the questions for the quiz. */

void play()
{
    system("cls");
    char ans;
    int score = 0;

    cout << "Ques 1.) Who is the prime minister of India?" << endl;
    cout << "(a) Narendra Modi" << endl;
    cout << "(b) Manmohan Singh" << endl;
    cout << "(c) Rahul Gandhi" << endl;
    cout << "(d) Arvind Kejriwal" << endl;
    cout << "\nEnter Your Answer: \n"
         << endl;
label:
    cin >> ans;

    if (ans == 'a' || ans == 'A')
    {
        cout << "Your answer is correct" << endl;
        score += 4;
        cout << "Score = " << score << endl;

        goto ques2;
    }

    if (ans == 'b' || ans == 'B') //|| ans == 'c' || ans == 'C' || ans == 'd' || ans == 'D')
    {
        cout << "Your answer is incorrect" << endl;
        score -= 1;
        cout << "Score = " << score << endl;
        goto ques2;
    }
    if (ans == 'c' || ans == 'C')
    {
        cout << "Your answer is incorrect" << endl;
        score -= 1;
        cout << "Score = " << score << endl;
        goto ques2;
    }
    if (ans == 'd' || ans == 'D')
    {
        cout << "Your answer is incorrect" << endl;
        score -= 1;
        cout << "Score = " << score << endl;
        goto ques2;
    }

    if (ans != 'a' || ans != 'b' || ans != 'c' || ans != 'd' || ans != 'A' || ans != 'B' || ans != 'C' || ans != 'D')
    {
        cout << "The option is invalid. Please enter the valid option." << endl;
        cout << "\nEnter Your Answer Again: " << endl;

        goto label;
    }

    cout << "\n";
ques2:
    pattern('&', 75);
    cout << "Ques 2.) Where Red Fort is loacted?" << endl;
    cout << "(a) Delhi" << endl;
    cout << "(b) Bhopal" << endl;
    cout << "(c) Udaipur" << endl;
    cout << "(d) Hyderabad" << endl;
    char ans2;
    cout << "\nEnter Your Answer: \n"
         << endl;
label2:
    cin >> ans2;

    if (ans2 == 'a' || ans2 == 'A')
    {
        cout << "Your answer is correct" << endl;
        score += 4;
        cout << "Score = " << score << endl;

        goto ques3;
    }

    if (ans2 == 'b' || ans2 == 'B') //|| ans == 'c' || ans == 'C' || ans == 'd' || ans == 'D')
    {
        cout << "Your answer is incorrect" << endl;
        score -= 1;
        cout << "Score = " << score << endl;
        goto ques3;
    }
    if (ans2 == 'c' || ans2 == 'C')
    {
        cout << "Your answer is incorrect" << endl;
        score -= 1;
        cout << "Score = " << score << endl;
        goto ques3;
    }
    if (ans2 == 'd' || ans2 == 'D')
    {
        cout << "Your answer is incorrect" << endl;
        score -= 1;
        cout << "Score = " << score << endl;
        goto ques3;
    }

    if (ans2 != 'a' || ans2 != 'b' || ans2 != 'c' || ans2 != 'd' || ans2 != 'A' || ans2 != 'B' || ans2 != 'C' || ans2 != 'D')
    {
        cout << "The option is invalid. Please enter the valid option." << endl;
        cout << "\nEnter Your Answer Again: " << endl;

        goto label2;
    }
    cout << "\n";
ques3:
    cout << "Ques 3.) Which country is a continent as well as an island?" << endl;
    cout << "(a) France" << endl;
    cout << "(b) Cuba" << endl;
    cout << "(c) Australia" << endl;
    cout << "(d) Japan" << endl;
    char ans3;
    cout << "\nEnter Your Answer: \n"
         << endl;
label3:
    cin >> ans3;

    if (ans3 == 'a' || ans3 == 'A')
    {
        cout << "Your answer is incorrect" << endl;
        score -= 1;
        cout << "Score = " << score << endl;

        goto ques4;
    }

    if (ans3 == 'b' || ans3 == 'B') //|| ans == 'c' || ans == 'C' || ans == 'd' || ans == 'D')
    {
        cout << "Your answer is incorrect" << endl;
        score -= 1;
        cout << "Score = " << score << endl;
        goto ques4;
    }
    if (ans3 == 'c' || ans3 == 'C')
    {
        cout << "Your answer is correct" << endl;
        score += 4;
        cout << "Score = " << score << endl;
        goto ques4;
    }
    if (ans3 == 'd' || ans3 == 'D')
    {
        cout << "Your answer is incorrect" << endl;
        score -= 1;
        cout << "Score = " << score << endl;
        goto ques4;
    }

    if (ans3 != 'a' || ans3 != 'b' || ans3 != 'c' || ans3 != 'd' || ans3 != 'A' || ans3 != 'B' || ans3 != 'C' || ans3 != 'D')
    {
        cout << "The option is invalid. Please enter the valid option." << endl;
        cout << "\nEnter Your Answer Again: " << endl;

        goto label3;
    }
    cout << "\n";
ques4:
    cout << "Ques 4.) Who is the CEO of Facebook?" << endl;
    cout << "(a) Tim Cook" << endl;
    cout << "(b) Mark Zuckerberg" << endl;
    cout << "(c) Sundar Pichai" << endl;
    cout << "(d) Jeff Bezos" << endl;
    char ans4;
    cout << "\nEnter Your Answer: \n"
         << endl;
label4:
    cin >> ans4;

    if (ans4 == 'a' || ans4 == 'A')
    {
        cout << "Your answer is correct" << endl;
        score -= 1;
        cout << "Score = " << score << endl;

        goto ques5;
    }

    if (ans4 == 'b' || ans4 == 'B') //|| ans == 'c' || ans == 'C' || ans == 'd' || ans == 'D')
    {
        cout << "Your answer is incorrect" << endl;
        score += 4;
        cout << "Score = " << score << endl;
        goto ques5;
    }
    if (ans4 == 'c' || ans4 == 'C')
    {
        cout << "Your answer is incorrect" << endl;
        score -= 1;
        cout << "Score = " << score << endl;
        goto ques5;
    }
    if (ans4 == 'd' || ans4 == 'D')
    {
        cout << "Your answer is incorrect" << endl;
        score -= 1;
        cout << "Score = " << score << endl;
        goto ques5;
    }

    if (ans4 != 'a' || ans4 != 'b' || ans4 != 'c' || ans4 != 'd' || ans4 != 'A' || ans4 != 'B' || ans4 != 'C' || ans4 != 'D')
    {
        cout << "The option is invalid. Please enter the valid option." << endl;
        cout << "\nEnter Your Answer Again: " << endl;

        goto label4;
    }
    cout << "\n";
ques5:
    cout << "Ques 5.) Which team won the 2019 ICC World Cup?" << endl
         << endl;
    cout << "(a) Ireland" << endl;
    cout << "(b) Netherlands" << endl;
    cout << "(c) India" << endl;
    cout << "(d) England" << endl;
    char ans5;
    cout << "\nEnter Your Answer: \n"
         << endl;
label5:
    cin >> ans5;

    if (ans5 == 'a' || ans5 == 'A')
    {
        cout << "Your answer is correct" << endl;
        score -= 1;
        cout << "Score = " << score << endl;

        goto the_end;
    }

    if (ans5 == 'b' || ans5 == 'B') //|| ans == 'c' || ans == 'C' || ans == 'd' || ans == 'D')
    {
        cout << "Your answer is incorrect" << endl;
        score -= 1;
        cout << "Score = " << score << endl;
        goto the_end;
    }
    if (ans5 == 'c' || ans5 == 'C')
    {
        cout << "Your answer is incorrect" << endl;
        score -= 1;
        cout << "Score = " << score << endl;
        goto the_end;
    }
    if (ans5 == 'd' || ans5 == 'D')
    {
        cout << "Your answer is incorrect" << endl;
        score += 4;
        cout << "Score = " << score << endl;
        goto the_end;
    }

    if (ans5 != 'a' || ans5 != 'b' || ans5 != 'c' || ans5 != 'd' || ans5 != 'A' || ans5 != 'B' || ans5 != 'C' || ans5 != 'D')
    {
        cout << "The option is invalid. Please enter the valid option." << endl;
        cout << "\nEnter Your Answer Again: " << endl;

        goto label5;
    }

the_end:
    cout << "\n";
    pattern('$', 100);
    pattern('$', 100);
    cout << "\nThank you!\n"
         << "End Of the Game" << endl;
}

int main()
{
menu:
    system("cls");
    system("color 60");

    /* This is the homepage of the quiz game. On the right side the login details of the current users is shown. */

    cout << "\n\n===========================================================\t\t  ** user1 = jimmy , user2 = john **\n";
    cout << "===========================================================\t\t  ** user3 = daniel , user4 = lily **\n";
    cout << "          ||      WELCOME TO QUIZING          ||           \t\t  ** pass1 = 101 , pass2 = 102 **\n";
    cout << "          ||   A GAME TO DELIVER KNOWLEDGE    ||           \t\t  ** pass3 = 103 , pass4 = 104 **\n";
    cout << "===========================================================\n";
    cout << "===========================================================\n\n\n";
    cout << "\n";
    cout << "\n";
    
    system("color 6D");
    cout << "--->To get out of the game, please type exit.\n";
    cout << "Choose an option: " << endl;
    system("color 60");
    cout << "\n";
    cout << "(1) SignUp" << endl;
    cout << "(2) Login" << endl;
    cout << "\n";

    char username[] = {};
    char password[] = {};
    int o;
    string a, b, c; //x,y;
    char user1[] = "jimmy", user2[] = "john", user3[] = "daniel", user4[] = "lily";
    char pass1[] = "101", pass2[] = "102", pass3[] = "103", pass4[] = "104";
    string x;
    string y;
    cin >> o;

    //Here switch - case used for sign up and login details of the user.
    //case(1) is used for sign up and default is used for direct login.
    switch (o)
    {
        /*Sign up*/
    case (1):
        system("cls");
        cout << "\t\t\t\tSign Up"
             << "\n\n"
             << endl;
        cout << "Enter Username: " << endl;
        cin >> a;
        cout << "Enter Password: " << endl;
        cin >> b;
        cout << "Re-enter the password: " << endl;
        cin >> c;
        cout << endl;
        if (b == c)
        {
        main_menu:
            system("cls");
            cout << "\n\n\t\t\tHOMEPAGE\n\n";
            cout << "(1) Play" << endl; //Set of questions for the user to answer and play.
            cout << "(2) Reset Score" << endl; //Erase your highest score and bring down to zero.
            cout << "(3) Show Record" << endl; //Show the highest score in the system.
            cout << "(4) Help" << endl;        //Help - Detail of the game.
            cout << "(5) Quit\n\n"
                 << endl; //Return to homepage.

            int o1;
            string text;
            string text2;

            cin >> o1;
                            switch (o1)
                            {
                            case 1:
                                play();
                                break;

                            // case 2:

                            //     break;
                            case 2:
                            system("cls");
                                cout<<"\n\n\t\t\tThis option is not in work at this point.\n"<<endl;
                                cout << "\ntype return " << endl;
                                cin >> text;
                            back_again4:
                                if (text == "return")
                                {
                                    goto main_menu;
                                }
                                else
                                {
                                    cout << "/* Please enter the correct text. */" << endl;
                                    cin >> text;
                                    goto back_again4;
                                }
                                break;
                            case 3:
                                system("cls");
                                cout << "\t\t\t\n\nRECORDS\n\n"
                                    << endl;
                                cout << "a) Score - 20\t=>Jimmy\n"
                                    << endl;
                                cout << "a) Score - 20\t=>John\n"
                                    << endl;
                                cout << "a) Score - 15\t=>Lily\n"
                                    << endl;
                                cout << "\ntype return " << endl;
                                cin >> text;
                            back_again:
                                if (text == "return")
                                {
                                    goto main_menu;
                                }
                                else
                                {
                                    cout << "/* Please enter the correct text. */" << endl;
                                    cin >> text;
                                    goto back_again;
                                }
                                break;
                            case 4:
                                system("cls");
                                cout << "\n\n\n\t/* This game is a question and answer game.\n\nYou can also win prizes by your organizer \n\nas per registration of the department"<<endl;

                                cout << "\ntype return to back " << endl;
                                cin >> text;
                            back:
                                if (text == "return")
                                {
                                    goto main_menu;
                                }
                                else
                                {
                                    cout << "/* Please enter the correct text. */" << endl;
                                    cin >> text;
                                    goto back;
                                }
                                break;
                            case 5:
                                goto menu;
                                break;
                            default:
                            cout<<"Please select the valid option!!!!!!!!!"<<endl;
                                break;
                            }
                        }
                        else
                        {
                            cout << "Passwords do not matched. Please try again." << endl;
                        }
                        break;

        /*Login*/
    case 2:
        system("cls");
        cout << "\t\t\t\tLogin"
             << "\n\n"
             << endl;
        cout << "Username: " << endl;
        cin >> x;
        cout << "Password: " << endl;
        cin >> y;
        if ((x == user1 && y == pass1) || (x == user2 && y == pass2) || (x == user3 && y == pass3) || (x == user4 && y == pass4))
        {
            system("cls");
            cout << "\n\n\t\t\tHOMEPAGE\n\n";
            cout << "(1) Play" << endl; //Set of questions for the user to answer and play.
            //cout << "(2) Show Score" << endl;  //To view the highest score.
            cout << "(2) Reset Score" << endl; //Erase your highest score and bring down to zero.
            cout << "(3) Show Record" << endl; //Show the highest score in the system.
            cout << "(4) Help" << endl;        //Help - Detail of the game.
            cout << "(5) Quit\n\n"
                 << endl; //Return to homepage.

            int o1;
            cin >> o1;
            string text;
            string text3;

                            switch (o1)
                            {
                            case 1:
                                play();
                                break;

                            // case 2:

                            //     break;
                            case 2:
                            system("cls");
                                cout<<"\n\n\t\t\tThis option is not in work at this point.\n"<<endl;
                                cout << "\ntype return " << endl;
                                cin >> text3;
                                back_again5:
                                if (text3 == "return")
                                {
                                    goto main_menu;
                                }
                                else
                                {
                                    cout << "/* Please enter the correct text. */" << endl;
                                    cin >> text3;
                                    goto back_again5;
                                }
                                break;
                            case 3:
                                system("cls");
                                cout << "\t\t\t\n\nRECORDS\n\n"
                                    << endl;
                                cout << "a) Score - 20\t=>Jimmy\n"
                                    << endl;
                                cout << "a) Score - 20\t=>John\n"
                                    << endl;
                                cout << "a) Score - 15\t=>Lily\n"
                                    << endl;
                                cout << "\ntype return " << endl;
                                cin >> text;
                            back_again2:
                                if (text == "return")
                                {
                                    goto main_menu;
                                }
                                else
                                {
                                    cout << "/* Please enter the correct text. */" << endl;
                                    cin >> text;
                                    goto back_again2;
                                }
                                break;
                            case 4:
                                system("cls");
                                cout << "\n\n\n\t/* This game is a question and answer game.\n\nYou can also win prizes by your organizer \n\nas per registration of the department"<<endl;
                                cout << "\ntype return to back " << endl;
                                cin >> text;
                            back_again1:
                                if (text == "return")
                                {
                                    goto main_menu;
                                }
                                else
                                {
                                    cout << "/* Please enter the correct text. */" << endl;
                                    cin >> text;
                                    goto back_again1;
                                }

                                break;
                            case 5:
                                goto menu;
                                break;

                            default:
                            cout<<"Please select the valid option!!!!!!!!!"<<endl;
                                break;
                            }
                        }
                        break;
                    default:
                        system("cls");
                        cout << "\n\n";
                        pattern('%', 100);
                        cout << "\nType exit to end the session.\n"
                            << endl;
                        pattern('%', 100);

                        break;
                    }

    return 0;
}







