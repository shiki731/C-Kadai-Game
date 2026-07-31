#include "Check.h"
#include <iostream>

void Check::Battle(int SelectP, int ActionP, int SelectE, int ActionE) {
    if (ActionP == 1) { // プレイヤーの攻撃

        if (SelectP == 1) { // プレイヤーは剣士

            if (ActionE == 1) { // 敵の攻撃

                if (SelectE == 1) { // 敵は剣士
                    std::cout << "ドロー" << std::endl;
                }
                else if (SelectE == 2) { // 敵は魔法使い
                    std::cout << "プレイヤーの攻撃成功" << std::endl;
                }
                else if (SelectE == 3) { // 敵は召喚士
                    std::cout << "プレイヤーの攻撃成功" << std::endl;
                }
            }
            else if (ActionE == 2) { // 敵の防御

                if (SelectE == 1) { // 敵は剣士
                    std::cout << "ドロー" << std::endl;
                }
                else if (SelectE == 2) { // 敵は魔法使い
                    std::cout << "敵のカウンター成功!" << std::endl;
                }
                else if (SelectE == 3) { // 敵は召喚士
                    std::cout << "クリティカル！" << std::endl;
                }
            }
        }
        else if (SelectP == 2) { // プレイヤーは魔法使い

            if (ActionE == 1) { // 敵の攻撃

                if (SelectE == 1) { // 敵は剣士
                    std::cout << "プレイヤーの攻撃失敗" << std::endl;
                }
                else if (SelectE == 2) { // 敵は魔法使い
                    std::cout << "ドロー" << std::endl;
                }
                else if (SelectE == 3) { // 敵は召喚士
                    std::cout << "プレイヤーの攻撃成功" << std::endl;
                }
            }
            else if (ActionE == 2) { // 敵の防御

                if (SelectE == 1) { // 敵は剣士
                    std::cout << "クリティカル！" << std::endl;
                }
                else if (SelectE == 2) { // 敵は魔法使い
                    std::cout << "ドロー" << std::endl;
                }
                else if (SelectE == 3) { // 敵は召喚士
                    std::cout << "敵のカウンター成功!" << std::endl;
                }
            }
        }
        else if (SelectP == 3) { // プレイヤーは召喚士

            if (ActionE == 1) { // 敵の攻撃

                if (SelectE == 1) { // 敵は剣士
                    std::cout << "プレイヤーの攻撃失敗" << std::endl;
                }
                else if (SelectE == 2) { // 敵は魔法使い
                    std::cout << "プレイヤーの攻撃失敗" << std::endl;
                }
                else if (SelectE == 3) { // 敵は召喚士
                    std::cout << "ドロー" << std::endl;
                }
            }
            else if (ActionE == 2) { // 敵の防御

                if (SelectE == 1) { // 敵は剣士
                    std::cout << "敵のカウンター成功!" << std::endl;
                }
                else if (SelectE == 2) { // 敵は魔法使い
                    std::cout << "クリティカル！" << std::endl;
                }
                else if (SelectE == 3) { // 敵は召喚士
                    std::cout << "ドロー" << std::endl;
                }
            }
        }
    }
    else if (ActionP == 2) { // プレイヤーの防御

        if (SelectP == 1) { // プレイヤーは剣士

            if (ActionE == 1) { // 敵の攻撃

                if (SelectE == 1) { // 敵は剣士
                    std::cout << "ドロー" << std::endl;
                }
                else if (SelectE == 2) { // 敵は魔法使い
                    std::cout << "敵のクリティカル！" << std::endl;
                }
                else if (SelectE == 3) { // 敵は召喚士
                    std::cout << "カウンター成功！" << std::endl;
                }
            }
            else if (ActionE == 2) { // 敵の防御

                if (SelectE == 1) { // 敵は剣士
                    std::cout << "なにもなし" << std::endl;
                }
                else if (SelectE == 2) { // 敵は魔法使い
                    std::cout << "なにもなし" << std::endl;
                }
                else if (SelectE == 3) { // 敵は召喚士
                    std::cout << "なにもなし" << std::endl;
                }
            }
        }
        else if (SelectP == 2) { // プレイヤーは魔法使い

            if (ActionE == 1) { // 敵の攻撃

                if (SelectE == 1) { // 敵は剣士
                    std::cout << "カウンター成功！" << std::endl;
                }
                else if (SelectE == 2) { // 敵は魔法使い
                    std::cout << "ドロー" << std::endl;
                }
                else if (SelectE == 3) { // 敵は召喚士
                    std::cout << "敵のクリティカル！" << std::endl;
                }
            }
            else if (ActionE == 2) { // 敵の防御

                if (SelectE == 1) { // 敵は剣士
                    std::cout << "なにもなし" << std::endl;
                }
                else if (SelectE == 2) { // 敵は魔法使い
                    std::cout << "なにもなし" << std::endl;
                }
                else if (SelectE == 3) { // 敵は召喚士
                    std::cout << "なにもなし" << std::endl;
                }
            }
        }
        else if (SelectP == 3) { // プレイヤーは召喚士

            if (ActionE == 1) { // 敵の攻撃

                if (SelectE == 1) { // 敵は剣士
                    std::cout << "敵のクリティカル！" << std::endl;
                }
                else if (SelectE == 2) { // 敵は魔法使い
                    std::cout << "カウンター成功！" << std::endl;
                }
                else if (SelectE == 3) { // 敵は召喚士
                    std::cout << "ドロー" << std::endl;
                }
            }
            else if (ActionE == 2) { // 敵の防御

                if (SelectE == 1) { // 敵は剣士
                    std::cout << "なにもなし" << std::endl;
                }
                else if (SelectE == 2) { // 敵は魔法使い
                    std::cout << "なにもなし" << std::endl;
                }
                else if (SelectE == 3) { // 敵は召喚士
                    std::cout << "なにもなし" << std::endl;
                }
            }
        }
    }
}