#include <M5Stack.h>

// 画面の状態を定義
enum DisplayState {
    STATE_NAME,
    STATE_PROFILE,
    STATE_CONTACT
};

DisplayState currentState = STATE_NAME;

// 各画面の描画関数
void showNamePage() {
    M5.Lcd.fillScreen(BLUE); // 背景色: 青
    M5.Lcd.setTextColor(WHITE); // 文字色: 白

    // 名前
    M5.Lcd.setTextSize(3);
    M5.Lcd.setCursor(40, 60);
    M5.Lcd.print("M5Stack User");

    // 肩書き
    M5.Lcd.setTextSize(2);
    M5.Lcd.setCursor(40, 120);
    M5.Lcd.print("Engineering learner");

    M5.Lcd.setTextSize(1);
    M5.Lcd.setCursor(80, 210);
    M5.Lcd.print("Press B for Profile");
}

void showProfilePage() {
    M5.Lcd.fillScreen(DARKGREEN); // 背景色: 深緑
    M5.Lcd.setTextColor(YELLOW);  // 文字色: 黄色

    M5.Lcd.setTextSize(3);
    M5.Lcd.setCursor(20, 30);
    M5.Lcd.print("Profile");

    M5.Lcd.setTextSize(2);
    M5.Lcd.setCursor(20, 80);
    M5.Lcd.println("Interest:");
    M5.Lcd.println("  - IoT Development");
    M5.Lcd.println("  - Robotics");
    M5.Lcd.println("  - Edge AI");

    M5.Lcd.setTextColor(WHITE);
    M5.Lcd.setTextSize(1);
    M5.Lcd.setCursor(80, 210);
    M5.Lcd.print("Press C for Hobby");
}

void showContactPage() {
    M5.Lcd.fillScreen(RED); // 背景色: 赤
    M5.Lcd.setTextColor(WHITE);

    M5.Lcd.setTextSize(3);
    M5.Lcd.setCursor(20, 30);
    M5.Lcd.print("Hobby & Skill");

    M5.Lcd.setTextSize(2);
    M5.Lcd.setCursor(20, 80);
    M5.Lcd.println("Skill:");
    M5.Lcd.println("  - C++/Arduino");
    M5.Lcd.println("  - Python");
    M5.Lcd.println("");
    M5.Lcd.println("Hobby:");
    M5.Lcd.println("  - Hiking");

    M5.Lcd.setTextSize(1);
    M5.Lcd.setCursor(80, 210);
    M5.Lcd.print("Press A for Name");
}

void setup() {
    // M5Stackの初期化
    M5.begin();
    // 電源管理チップの初期化（バッテリー管理や安定供給のために推奨）
    M5.Power.begin();

    // 初回描画
    showNamePage();
}

void loop() {
    M5.update(); // ボタン状態の更新

    // ボタン入力を監視
    if (M5.BtnA.wasPressed()) {
        if (currentState != STATE_NAME) {
            currentState = STATE_NAME;
            showNamePage();
        }
    }

    if (M5.BtnB.wasPressed()) {
        if (currentState != STATE_PROFILE) {
            currentState = STATE_PROFILE;
            showProfilePage();
        }
    }

    if (M5.BtnC.wasPressed()) {
        if (currentState != STATE_CONTACT) {
            currentState = STATE_CONTACT;
            showContactPage();
        }
    }

    delay(10);
}
