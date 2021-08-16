#include <bits/stdc++.h>

using namespace std;

//creating a array to store the user inputs

vector<char> create_MainBoard()
{
    vector<char> v(9,'*');

    return v;
}



void mainboard_display(vector <char> &mainboard)
{
    cout<<" -------------"<<endl;
    cout<<" | "<<mainboard[0]<<" | "<<mainboard[1]<<" | "<<mainboard[2]<<" | "<<endl;
    cout<<" -------------"<<endl;
    cout<<" | "<<mainboard[3]<<" | "<<mainboard[4]<<" | "<<mainboard[5]<<" | "<<endl;
    cout<<" -------------"<<endl;
    cout<<" | "<<mainboard[6]<<" | "<<mainboard[7]<<" | "<<mainboard[8]<<" | "<<endl;
    cout<<" -------------"<<endl;
}


int main()
{   
    cout<<"The Game of Tic Tac Toe begins!!!"<<endl;
    cout<<endl;

    int option = 0;

    while(option != 3)
    {
        cout<<"1. New Game"<<endl;
        cout<<"2. Rules"<<endl;
        cout<<"3. exit"<<endl;

        
        cout<<"Enter your option here:"; cin>>option;

        if(option == 1)
        {
            cout<<"Welcome to the game!!!"<<endl;
            string p1,p2;
            cout<<"Enter the name of the player 1: ";cin>>p1;
            cout<<"Enter the name of player 2: ";cin>>p2;

            cout<<p1<<" use 'X' as your symbol"<<endl;
            cout<<p2<<" use 'O' as your symbol"<<endl;

            vector<char> mainboard;
            mainboard = create_MainBoard();
            mainboard_display(mainboard);
            int count = 0;

            while(count<10)
            {   int x1,x2;
                //player1 code
                cout<<p1<<" Enter the number of the box you want to place your coin"; cin>>x1;
                mainboard[x1] = 'X';
                mainboard_display(mainboard);
                if(mainboard[0] == mainboard[1] && mainboard[1]== mainboard[2] && mainboard[2] == 'X')
                {
                    cout<<" Hurray!!! "<<p1<<"---WINS---"<<endl;
                    cout<<endl;
                    break;
                }
                //done
                else if(mainboard[3] == mainboard[4] && mainboard[4] == mainboard[5] && mainboard[5] == 'X')
                {
                    cout<<" Hurray!!! "<<p1<<"---WINS---"<<endl;
                    cout<<endl;
                    break;
                }
                //done
                else if(mainboard[6] == mainboard[7] && mainboard[7] == mainboard[8] && mainboard[8] == 'X')
                {
                    cout<<" Hurray!!! "<<p1<<"---WINS---"<<endl;
                    cout<<endl;
                    break;
                }
                //dome
                else if(mainboard[0] == mainboard[3] && mainboard[3] == mainboard[6] && mainboard[6] == 'X')
                {
                    cout<<" Hurray!!! "<<p1<<"---WINS---"<<endl;
                    cout<<endl;
                    break;
                }
                //done
                else if(mainboard[1] == mainboard[4] && mainboard[4] == mainboard[7] && mainboard[7] == 'X')
                {
                    cout<<" Hurray!!! "<<p1<<"---WINS---"<<endl;
                    cout<<endl;
                    break;
                }
                //done
                else if(mainboard[2] == mainboard[5] && mainboard[5] == mainboard[8] && mainboard[8] == 'X')
                {
                    cout<<" Hurray!!! "<<p1<<"---WINS---"<<endl;
                    cout<<endl;
                    break;
                }
                //done
                else if(mainboard[0] == mainboard[4] && mainboard[4] == mainboard[8] && mainboard[8] == 'X')
                {
                    cout<<" Hurray!!! "<<p1<<"---WINS---"<<endl;
                    cout<<endl;
                    break;
                }
                //done
                else if(mainboard[2] == mainboard[4] && mainboard[4] == mainboard[6] && mainboard[6] == 'X')
                {
                    cout<<" Hurray!!! "<<p1<<"---WINS---"<<endl;
                    cout<<endl;
                    break;
                }

                count++;
                //player2 code
                
                cout<<p2<<" Enter the number of the box you want to place your coin"; cin>>x2;
                mainboard[x2] = 'O';
                mainboard_display(mainboard);
                if(mainboard[0] == mainboard[1] && mainboard[1]== mainboard[2] && mainboard[2] == 'O')
                {
                    cout<<p1<<" Hurray!!! "<<p2<<"---WINS---"<<endl;
                    cout<<endl;
                    break;
                }
                //done
                else if(mainboard[3] == mainboard[4] && mainboard[4] == mainboard[5] && mainboard[5] == 'O')
                {
                    cout<<p1<<" Hurray!!! "<<p2<<"---WINS---"<<endl;
                    cout<<endl;
                    break;
                }
                //done
                else if(mainboard[6] == mainboard[7] && mainboard[7] == mainboard[8] && mainboard[8] == 'O')
                {
                    cout<<p1<<" Hurray!!! "<<p2<<"---WINS---"<<endl;
                    cout<<endl;
                    break;
                }
                //dome
                else if(mainboard[0] == mainboard[3] && mainboard[3] == mainboard[6] && mainboard[6] == 'O')
                {
                    cout<<p1<<" Hurray!!! "<<p2<<"---WINS---"<<endl;
                    cout<<endl;
                    break;
                }
                //done
                else if(mainboard[1] == mainboard[4] && mainboard[4] == mainboard[7] && mainboard[7] == 'O')
                {
                    cout<<p1<<" Hurray!!! "<<p2<<"---WINS---"<<endl;
                    cout<<endl;
                    break;
                }
                //done
                else if(mainboard[2] == mainboard[5] && mainboard[5] == mainboard[8] && mainboard[8] == 'O')
                {
                    cout<<p1<<" Hurray!!! "<<p2<<"---WINS---"<<endl;
                    cout<<endl;
                    break;
                }
                //done
                else if(mainboard[0] == mainboard[4] && mainboard[4] == mainboard[8] && mainboard[8] == 'O')
                {
                    cout<<p1<<" Hurray!!! "<<p2<<"---WINS---"<<endl;
                    cout<<endl;
                    break;
                }
                //done
                else if(mainboard[2] == mainboard[4] && mainboard[4] == mainboard[6] && mainboard[6] == 'O')
                {
                    cout<<p1<<" Hurray!!! "<<p2<<"---WINS---"<<endl;
                    cout<<endl;
                    break;
                }

                count++;
            }

            if(count == 10)
            {
                cout<<"The match has been DRAWN!!!"<<endl;
            }


            return 0;
            
        }

        else if(option == 2)
        {   
            cout<<endl;
            cout<<"--------------------------------------------------------------------------------------------------------"<<endl;
            cout<<"RULES:"<<endl;
            cout<<endl;
            cout<<"1.This game is to be played by 2 players"<<endl;
            cout<<"2.There is a square box with nine boxes"<<endl;
            cout<<"3.Each player is allotted a symbol, either 'X' or 'O'"<<endl;
            cout<<"4. The board and their positions looks like this:"<<endl;
            cout<<"           "<<" -------------"<<endl;
            cout<<"           "<<" | "<<"0"<<" | "<<"1"<<" | "<<"2"<<" | "<<endl;
            cout<<"           "<<" -------------"<<endl;
            cout<<"           "<<" | "<<"3"<<" | "<<"4"<<" | "<<"5"<<" | "<<endl;
            cout<<"           "<<" -------------"<<endl;
            cout<<"           "<<" | "<<"6"<<" | "<<"7"<<" | "<<"8"<<" | "<<endl;
            cout<<"           "<<" -------------"<<endl;
            cout<<"5.The player who succeeds to put all his coins on the horizantal or vertical or diagonal manner wins"<<endl; 
            cout<<"--------------------------------------------------------------------------------------------------------"<<endl;
            }

        else if(option == 3)
        {
            exit(0);
        }

        else
        {
            cout<<"Please, enter the correct option"<<endl;
        }
    }

    

    return 0;
}