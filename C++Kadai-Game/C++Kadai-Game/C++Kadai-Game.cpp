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
#include "Check.h"


int main()
{
    std::cout << "ゲーム開始" << std::endl;

    // new/deleteでインスタンス化、スマートポインタで管理
    // {
    Sword* playerSword = new Sword;
    Magic* playerMagic = new Magic;
    Salmon* playerSalmon = new Salmon;
    CharaSelect* charaSelect = new CharaSelect;

    std::shared_ptr<Sword> pSwordptr(playerSword); //<Character>型でいい
    std::shared_ptr<Magic> pMagicptr(playerMagic);
    std::shared_ptr<Salmon> pSalmonptr(playerSalmon);
    std::shared_ptr<CharaSelect> pCharaSelectptr(charaSelect);

    delete playerSword;
    delete playerMagic;
    delete playerSalmon;
    delete charaSelect;
    // }

    // 各攻撃力を設定
    pSwordptr->power = 45;
    pMagicptr->power = 30;
    pSalmonptr->power = 25;

    std::unique_ptr<Check> battle = std::make_unique<Check>();
    std::shared_ptr<Character> HPptr = std::make_shared<Character>();

    HPptr->playerHP = 300;
    HPptr->enemyHP = 300;
    
    while (true) {
        std::cout << "現在のプレイヤーの戦力:" << HPptr->playerHP << std::endl;
        std::cout << "現在の敵の戦力:" << HPptr->enemyHP << std::endl;

        int charaSelect = pCharaSelectptr->charaSelect();
        int actionSelect = pCharaSelectptr->actionSelect();

        srand((unsigned int)time(NULL));
        int EcharaSelect = rand() % 3 + 1;
        int EactionSelect = rand() % 2 + 1;

        printf("　\n");
        printf("キャラは%d、技は%d\n", charaSelect, actionSelect);
        printf("敵のキャラは%d、技は%d\n", EcharaSelect, EactionSelect);
        printf("　\n");

        battle->Battle(charaSelect, actionSelect, EcharaSelect, EactionSelect);
        printf("　\n");

        if (HPptr->playerHP <= 0) {
            std::cout << "プレイヤーの負け" << std::endl;
            break;
        }
        else if (HPptr->enemyHP <= 0) {
            std::cout << "プレイヤーの勝ち" << std::endl;
            break;
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
