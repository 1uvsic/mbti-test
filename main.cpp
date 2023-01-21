/*
 클래스101 개발자 라라
 10년 차 개발자의 [게임 개발/앱 개발/프로그래밍]을 위한 C/C++ 입문
 함께 만드는 코딩 #1- MBTI 성격검사 테스트 과제
 */

#include "main.h"

int main(){
    
    int score_I_E = 0;
    int score_S_N = 0;
    int score_T_F = 0;
    int score_J_P = 0;
    
    printf( "<<MBTI 테스트>>\n" );
    
    // I-E
    chooseAnswer("[1-1] 나는 처음 보는 사람에게 자신을 소개하는 것이 두렵지 않다.", -3, -1, 1, 3, &score_I_E);
    chooseAnswer("[1-2] 내가 스트레스를 해소하는 방법은 사람들을 만나는 것이다.", -3, -1, 1, 3, &score_I_E);
    chooseAnswer("[1-3] 대화를 시작하기보다 맞장구 치는걸 좋아한다.", 3, 1, -1, -3, &score_I_E);
    chooseAnswer("[1-4] 술자리에서 노는 것 보다 집에서 게임하는 게 좋다.", 3, 1, -1, -3, &score_I_E);
    // S-N
    chooseAnswer("[2-1] 업무를 하거나 과제를 할 때 계획을 먼저 세운다.", -3, -1, 1, 3, &score_S_N);
    chooseAnswer("[2-2] 가끔 번뜩이는 아이디어가 생각나 메모를 하곤 한다.", -3, -1, 1, 3, &score_S_N);
    chooseAnswer("[2-3] 가끔 비현실적인 망상을 하는 편이다.", -3, -1, 1, 3, &score_S_N);
    chooseAnswer("[2-4] 스스로 생각하기에 나는 내성적인 성격이다.", -3, -1, 1, 3, &score_S_N);
    // T-F
    chooseAnswer("[3-1] 상대방의 고민을 들어줄 때 원인을 찾기보다 공감을 해주는 편이다.",-3, -1, 1, 3, &score_T_F);
    chooseAnswer("[3-2] 어떤 이유에서건 상대방의 기분을 먼저 생각해야 한다.", -3, -1, 1, 3, &score_T_F);
    chooseAnswer("[3-3] 다른 사람들이 나를 어떻게 생각하는지 지나치게 생각한다.", -3, -1, 1, 3, &score_T_F);
    chooseAnswer("[3-4] 영화나 드라마가 뮤지컬이나 예술작품보다 더 많은 영감을 준다.", 3, 1, -1, -3, &score_T_F);
    // J-P
    chooseAnswer("[4-1] 방 정리가 되어 있지 않으면 일을 시작할 수 없다.", 3, 1, -1, -3, &score_J_P);
    chooseAnswer("[4-2] 과제나 업무는 최대한 미루었다가 한꺼번에 하는 편이다.", -3, -1, 1, 3, &score_J_P);
    chooseAnswer("[4-3] 호기심은 나를 움직이는 원동력이다.", -3, -1, 1, 3, &score_J_P);
    chooseAnswer("[4-4] 프리랜서가 회사원보다 더 나은 삶을 살고 있다고 생각한다.", -3, -1, 1, 3, &score_J_P);
    
    printResult(score_I_E, score_S_N, score_T_F, score_J_P);
    
    return 0;
}

void printResult(int i_e, int s_n, int t_f, int j_p){
    
    char mbti[5];
    
    if ( i_e < 0 )
        mbti[0] = 'I';
    else
        mbti[0] = 'E';
    
    if ( s_n < 0 )
        mbti[1] = 'S';
    else
        mbti[1] = 'N';
    
    if ( t_f < 0 )
        mbti[2] = 'T';
    else
        mbti[2] = 'F';
    
    if ( j_p < 0 )
        mbti[3] = 'J';
    else
        mbti[3] = 'P';
    
    mbti[4] = '\0';
    
    printf( "당신의 MBTI 결과는 %s 입니다.", mbti );
    
    if ( strcmp(mbti, "ISTJ") == 0 )
        printf( "ISTJ\n당신은 논리주의자 입니다. 사실에 대하여 정확하고 체계적으로 기억하며 신중하고 책임감이 있습니다." );
    
    else if ( strcmp(mbti, "ISFJ") == 0 )
        printf( "ISFJ\n당신은 조용하고 차분하며 친근합니다. 가장 믿음직스러운 사람입니다." );
    
    else if ( strcmp(mbti, "INFJ") == 0 )
        printf( "INFJ\n당신은 인내심이 많고 사람들을 좋아합니다. 눈치가 빠르고 영감이 있습니다." );

    else if ( strcmp(mbti, "INTJ") == 0 )
        printf( "INTJ\n당신은 논리적이고 효율성을 중시하는 냉철한 사람입니다." );
    
    else if ( strcmp(mbti, "ISTP") == 0 )
        printf( "ISTP\n조용하고 과묵하고 손재주가 있는 공학자 스타일 입니다." );
    
    else if ( strcmp(mbti, "ISFP") == 0 )
        printf( "ISFP\n다정하고 착하고 상대방에 대한 배려심이 많습니다. 주위 사람들에게 많이 휩쓸리는 성격입니다." );
    
    else if ( strcmp(mbti, "INFP") == 0 )
        printf( "INFP\n당신은 정열적이고 완벽을 추구하며 유토피아를 추구하는 성격입니다." );
    
    else if ( strcmp(mbti, "INTP") == 0 )
        printf( "INTP\n당신은 조용하고 과묵하며 상상을 즐기는 사색가 입니다. 사회성이 부족하다는 말을 많이 듣습니다." );
    
    else if ( strcmp(mbti, "ESTP") == 0 )
        printf( "ESTP\n당신은 활동하는 것을 좋아하는 사업가형 입니다." );
    
    else if ( strcmp(mbti, "ESFP") == 0 )
        printf( "ESFP\n당신은 자유로운 영혼을 갖고있는 연예인 스타일입니다." );
    
    else if ( strcmp(mbti, "ENFP") == 0 )
        printf( "ENFP\n당신은 넘치는 상상력을 바탕으로 항상 새로운 가능성을 찾아보는 탐험가입니다." );
    
    else if ( strcmp(mbti, "ENTP") == 0 )
        printf( "ENTP\n당신은 논쟁을 즐기며 사람을 만나는 것을 좋아합니다." );
    
    else if ( strcmp(mbti, "ESTJ") == 0 )
        printf( "ESTJ\n현실적 구체적이고 사실적이며 조직을 이끌어나가는 리더형 입니다." );
    
    else if ( strcmp(mbti, "ESFJ") == 0 )
        printf( "ESFJ\n동정심이 많고 다른 사람에게 관심을 주는 것을 좋아하며 협력을 조항하고 동료애가 끈끈합니다." );
    
    else if ( strcmp(mbti, "ENFJ") == 0 )
        printf( "ENFJ\n당신은 따뜻하고 적극적이며 사교성이 풍부하고 이타적입니다." );
    
    else if ( strcmp(mbti, "ENTJ") == 0 )
        printf( "ENTJ\n당신은 열정적이며 솔직하고 지도력과 통솔력이 있습니다. 활동적이고 장기적인 계획을 좋아합니다." );
}

void chooseAnswer( const char* question, int veryNo, int no, int yes, int veryYes, int* target ){
    
    for ( ;; ){
        
        printf("%s\n(1. 매우 아니다, 2. 아니다, 3. 그렇다, 4. 매우 그렇다\n", question);
        printf("답변을 입력해 주세요: ");
        int input = getInt();
        
        if ( input == 1 ){
            *target = *target + veryNo;
            break;
        }
        else if ( input == 2 ){
            *target = *target + no;
            break;
        }
        else if ( input == 3 ){
            *target = *target + yes;
            break;
        }
        else if ( input == 4 ){
            *target = *target + veryYes;
            break;
        }
        else{
            printf("잘못된 입력입니다.\n");
            continue;
        }
    }
}

int getInt(){

    int input;
    fseek(stdin, 0, SEEK_END);
    scanf("%d", &input);
    
    return input;
}

