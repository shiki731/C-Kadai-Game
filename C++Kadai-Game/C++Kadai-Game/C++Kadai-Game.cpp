// C++Kadai-Game.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <memory>
#include <iostream>
#include "Character.h"
#include "Sword.h"
#include "Magic.h"
#include "Salmon.h"


int main()
{
    std::cout << "Hello World!\n";
    std::cout << "ゲーム開始" << std::endl;

    // new/deleteでインスタンス化、スマートポインタで管理
    // {
    Sword* playerSword = new Sword;
    Magic* playerMagic = new Magic;
    Salmon* playerSalmon = new Salmon;

    std::unique_ptr<Sword> pSwordptr(playerSword);
    std::unique_ptr<Magic> pMagicptr(playerMagic);
    std::unique_ptr<Salmon> pSalmonptr(playerSalmon);

    delete playerSword;
    delete playerMagic;
    delete playerSalmon;
    // }

    // 各攻撃力を設定
    pSwordptr->power = 40;
    pMagicptr->power = 30;
    pSalmonptr->power = 30;

    int a = 0;
    
    while (true) {
        

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
