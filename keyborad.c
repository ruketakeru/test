/*******************************/
/*  �L�[�{�[�h�s�A�m�iBeep���j */
/*******************************/
#include <windows.h>
#include <conio.h>
#include <stdio.h>
#include <string.h>

void  main( )
{
  int   n,nO=-1;   // �L�[�ԍ�
  int   Hz;        // Beep�����g��

    system("cls");                        // ��ʏ���

    printf(" \n");
    printf(" |~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n");
    printf(" |                 �L�[�{�[�h�s�A�m�iBeep���j                  |\n");
    printf(" |          ��Shift�L�[�������ƂP�I�N�^�[�u�オ��܂�          |\n");
    printf(" |          ���������͂ł��܂���                               |\n");
    printf(" |                                                             |\n");
    printf(" *:._.:*~*:._.:*~*:._.:*~*:._.:*~*:._.:*~*:._.:*~*:._.:*~*:._.:*\n");
    printf("  |                                                           | \n");
    printf("  |----,----,----,----,----,----,----,----,----,----,----,----| \n");
    printf("  |�\��|����|    |�h��|����|    |̧��|�\��|����|    |�h��|����| \n");
    printf("  | �` | �r | �c | �e | �f | �g | �i | �j | �k | �G | �F | �n | \n");
    printf("  '----'----'----'----'----'----'----'----'----'----'----'----' \n");
    printf("    | �� | �V | �h | �� | �~ | ̧ | �\ | �� | �V | �h | �� |    \n");
    printf("    | �y | �w | �b | �u | �a | �m | �l | �C | �D | �^ | �_ |    \n");
    printf("    '----'----'----'----'----'----'----'----'----'----'----'    \n");

    while ( 1 )
      {
        if ( kbhit( )==0 )               // �L�[��������ĂȂ�
          { n=-1; continue; }            // �L�[�ԍ��𖳌��ɂ���

        nO=n;                            // �O�̃L�[�ԍ��ۑ�
        n=getch( );                      // �P�����ǂށi�L�[�{�[�h�o�b�t�@�N���A�j
        if ( n==27 ) break;              // ESC�ŏI��
        if ( n==nO ) continue;           // �����L�[���������܂�

        switch (n)
          {
            case  97: Hz= 208; break;    // a �\��
            case 115: Hz= 233; break;    // s ����
            case 102: Hz= 277; break;    // f �h��
            case 103: Hz= 311; break;    // g ����
            case 106: Hz= 370; break;    // j �t�@��
            case 107: Hz= 415; break;    // k �\��
            case 108: Hz= 466; break;    // l ����
            case  58: Hz= 554; break;    // ; �h��
            case  93: Hz= 622; break;    // ] ����

            case 122: Hz= 220; break;    // z ��
            case 120: Hz= 247; break;    // x �V
            case  99: Hz= 262; break;    // c �h
            case 118: Hz= 294; break;    // v ��
            case  98: Hz= 330; break;    // b �~
            case 110: Hz= 349; break;    // n �t�@
            case 109: Hz= 392; break;    // m �\
            case  44: Hz= 440; break;    // , ��
            case  46: Hz= 494; break;    // . �V
            case  47: Hz= 523; break;    // / �h
            case  92: Hz= 587; break;    // \ ��

            //--Shift--
            case  65: Hz= 415; break;    // A �\��
            case  83: Hz= 466; break;    // S ����
            case  70: Hz= 554; break;    // F �h��
            case  71: Hz= 622; break;    // G ����
            case  72: Hz= 740; break;    // J �t�@��
            case  74: Hz= 831; break;    // K �\��
            case  76: Hz= 932; break;    // L ����
            case  43: Hz=1109; break;    // + �h��
            case 125: Hz=1245; break;    // ] ����

            case  90: Hz= 440; break;    // Z ��
            case  88: Hz= 494; break;    // X �V
            case  67: Hz= 523; break;    // C �h
            case  86: Hz= 587; break;    // V ��
            case  66: Hz= 659; break;    // B �~
            case  78: Hz= 698; break;    // N �t�@
            case  77: Hz= 784; break;    // M �\
            case  60: Hz= 880; break;    // < ��
            case  62: Hz= 988; break;    // > �V
            case  63: Hz=1047; break;    // ? �h
            case  95: Hz=1175; break;    // _ ��

            default : Hz=   0;
          }

        Beep(Hz,200);                    // 200�~���b�炷
      }
}
   