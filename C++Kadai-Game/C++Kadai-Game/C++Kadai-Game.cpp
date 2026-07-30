// C++Kadai-Game.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <stdlib.h>
#include <time.h>
#include <memory>
#include <iostream>
#include "Character.h"
#include "Sword.h"
#include "Magic.h"
#include "Salmon.h"
#include "CharaSelect.h"
#include "HP.h"


int main()
{
    std::cout << "ゲーム開始" << std::endl;

    // new/deleteでインスタンス化、スマートポインタで管理
    // {
    Sword* playerSword = new Sword;
    Magic* playerMagic = new Magic;
    Salmon* playerSalmon = new Salmon;
    CharaSelect* charaSelect = new CharaSelect;

    std::unique_ptr<Sword> pSwordptr(playerSword);
    std::unique_ptr<Magic> pMagicptr(playerMagic);
    std::unique_ptr<Salmon> pSalmonptr(playerSalmon);
    std::unique_ptr<CharaSelect> pCharaSelectptr(charaSelect);

    delete playerSword;
    delete playerMagic;
    delete playerSalmon;
    delete charaSelect;
    // }

    // 各攻撃力を設定
    pSwordptr->power = 45;
    pMagicptr->power = 30;
    pSalmonptr->power = 25;

    std::unique_ptr<HP> pHP = std::make_unique<HP>();
    
    while (true) {
        int charaSelect = pCharaSelectptr->charaSelect();
        int actionSelect = pCharaSelectptr->actionSelect();
        // printf("キャラは%d、技は%d\n", charaSelect, actionSelect);

        srand((unsigned int)time(NULL));
        int EcharaSelect = rand() % 3 + 1;
        int EactionSelect = rand() % 2 + 1;
        // printf("キャラは%d、技は%d\n", EcharaSelect, EactionSelect);

        if (actionSelect == 1) {

            if (charaSelect == 1) {
                pSwordptr->Battle(EcharaSelect,EactionSelect);
            }
            else if (charaSelect == 2) {
                pMagicptr->Battle(EcharaSelect, EactionSelect);
            }
            else if (charaSelect == 3) {
                pSalmonptr->Battle(EcharaSelect, EactionSelect);
            }
        }
        else if (actionSelect == 2) {

            if (charaSelect == 1) {
                pSwordptr->Defence(EcharaSelect, EactionSelect);
            }
            else if (charaSelect == 2) {
                pMagicptr->Defence(EcharaSelect, EactionSelect);
            }
            else if (charaSelect == 3) {
                pSalmonptr->Defence(EcharaSelect, EactionSelect);
            }
        }
        

    }
    
    
}

// プログラムの実行: Ctrl + F5 または [デバッグ] > [デバッグなしで開始] メニュー
// プログラムのデバッグ: F5 または [デバッグ] > [デバッグの開始] メニュー

// 作業を開始するためのヒント: 
//    1. ソリューション エクスプローラー ウィンドウを使用してファイルを追加/管理します 
//   2. チーム エクスプローラー ウィンドウを使用してソース管理に接続します
//   3. 出力ウィンドウを使用して、ビルド出力とその他のメッセージを表示します
//   4. エラー一覧ウィンドウを使用してエラーを表示します
//   5. [プロジェクト] > [新しい項目の追加] と移動して新しいコード ファイルを作成するか、[プロジェクト] > [既存の項目の追加] と移動して既存のコード ファイルをプロジェクトに追加します
//   6. 後ほどこのプロジェクトを再び開く場合、[ファイル] > [開く] > [プロジェクト] と移動して .sln ファイルを選択します
