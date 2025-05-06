// 列挙型を使用した場合
// 例えば、炊飯器を制御するシステムがありますよと、「0は炊飯前、1は炊飯中、2は炊飯後」とか数字だけで判断するのは読みづらくてわかりにくい。
// だから最初から WAITING, COOKING, KEEP_WARM みたいな意味のある名前で状態を扱えるようにするのが列挙型の目的。
#include <stdio.h>
#include <stdbool.h>

// 状態を列挙型で定義
enum CookState {
    WAITING,
    COOKING,
    KEEP_WARM
};

// ボタン押下を擬似的に取得する関数（実際はセンサ読み取り）
bool isCookButtonPressed() {
    return true; // 押されたことにする
}

// ヒーターON/OFF（本来はGPIO出力制御）
void heaterOn() {
    printf("🔥 ヒーター ON\n");
}

void heaterOff() {
    printf("🧊 ヒーター OFF\n");
}

int main() {
    // 初期状態は「待機中」
    enum CookState currentState = WAITING;

    // 「ボタンが押され」かつ「待機中」なら炊飯開始
    // 実質currentState == WAITINGはcurrentStateが0なのかを見てるだけ
	  // 0であれば1に変える。👈この見せ方がわかりずらいからラベリングしているだけ
    if (isCookButtonPressed() && currentState == WAITING) {
        // 炊飯開始したから状態を炊飯中に変更
        currentState = COOKING;
        printf("🍚 炊飯を開始します...\n");
        heaterOn();

        // 擬似的に3分間炊飯中
        for (int i = 0; i < 3; i++) {
            printf("…炊飯中 %d分経過\n", i + 1);
        }

        heaterOff();
        currentState = KEEP_WARM;
        printf("♨️ 保温モードに切り替えました\n");
    }

    return 0;
}
