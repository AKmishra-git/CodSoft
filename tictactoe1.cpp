#include<iostream>
using namespace std;



void Playboard(char *arr){

    cout<<endl;
    cout << "     |     |     " << '\n';
    cout << "  " << arr[0] << "  |  " << arr[1] << "  |  " << arr[2] << "  " << '\n';
    cout << "_____|_____|_____" << '\n';
    cout << "     |     |     " << '\n';
    cout << "  " << arr[3] << "  |  " << arr[4] << "  |  " << arr[5] << "  " << '\n';
    cout << "_____|_____|_____" << '\n';
    cout << "     |     |     " << '\n';
    cout << "  " << arr[6] << "  |  " << arr[7] << "  |  " << arr[8] << "  " << '\n';
    cout << "     |     |     " << '\n';
    cout << '\n';
}

void player1move(char *arr, char player1) {
    int num;
    do{ 
        cout<<"PLAYER1--Enter the spot you want to place: ";
        cin>>num;
        num--;
        if(arr[num]==' '){
            arr[num] = player1;
            break;
        }
    }while(num<=9||num>=0);
}

void player2move(char *arr, char player2) {
    int num1;
    do{
        cout<<"PLAYER2--Enter your position: ";
        cin>>num1;
        num1--;
        if(arr[num1]==' '){
            arr[num1]= player2;
            break;
        }
    }while(num1<=9 || num1>=0);
}

bool Winner(char *arr, char player1, char player2) {
    if((arr[0] != ' ') && (arr[0] == arr[1]) && (arr[1] == arr[2])){
        arr[0] == player1 ? cout << "PLAYER1 WIN\n" : cout <<"PLAYER2 WIN\n";
    }
    else if((arr[3] != ' ') && (arr[3] == arr[4]) && (arr[4] == arr[5])){
        arr[3] == player1 ? cout << "PLAYER1 WIN\n" : cout <<"PLAYER2 WIN\n";
    }
    else if((arr[6] != ' ') && (arr[6] == arr[7]) && (arr[7] == arr[8])){
        arr[6] == player1 ? cout << "PLAYER1 WIN\n" : cout <<"PLAYER2 WIN\n";
    }
    else if((arr[0] != ' ') && (arr[0] == arr[3]) && (arr[3] == arr[6])){
        arr[0] == player1 ? cout << "PLAYER1 WIN\n" : cout <<"PLAYER2 WIN\n";
    }
    else if((arr[1] != ' ') && (arr[1] == arr[4]) && (arr[4] == arr[7])){
        arr[1] == player1 ? cout << "PLAYER1 WIN\n" : cout <<"PLAYER2 WIN\n";
    }
    else if((arr[2] != ' ') && (arr[2] == arr[5]) && (arr[5] == arr[8])){
        arr[2] == player1 ? cout << "PLAYER1 WIN\n" : cout <<"PLAYER2 WIN\n";
    }
    else if((arr[0] != ' ') && (arr[0] == arr[4]) && (arr[4] == arr[8])){
        arr[0] == player1 ? cout << "PLAYER1 WIN\n" : cout <<"PLAYER2 WIN\n";
    }
    else if((arr[2] != ' ') && (arr[2] == arr[4]) && (arr[4] == arr[6])){
        arr[2] == player1 ? cout << "PLAYER1 WIN\n" : cout <<"PLAYER2 WIN\n";
    }
    else{
        return false;
    }

    return true;
}

bool draw(char *arr){

    for(int i=0;i<9;i++) {
        if(arr[i]==' '){
            return false;
        }
    }
    cout<<"---MATCH TIE----"<<endl;
    return true;
}

int main() {
    cout<<"****WELCOME TO TIC-TAC-TOE GAME****"<<endl;
    
    char arr[] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    char player1 = 'X';
    char player2 = '0';
    bool process;

    while(process) {
        player1move(arr,player1); 
        Playboard(arr);
        if(Winner(arr, player1 ,player2)){
            process = false;
            break;
        }
        else if(draw(arr)){
            process = false;
            break;
        }

        player2move(arr, player2);
        Playboard(arr);
        if(Winner(arr, player1, player2)){
            process = false;
            break;
        }
        else if(draw(arr)){
            process = false;
            break;
        }

        
    }
    cout<<"***THANKS FOR PLAYING*****"<<endl;
    cout<<"|PLAY AGAIN| ";
}


        
    





