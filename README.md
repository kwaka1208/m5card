# M5Card (M5Stack Display Learning Project)

このプロジェクトは、M5StackのLCD表示機能やボタン入力の使い方を学習するためのサンプルプログラムです。
デジタル名刺のような形式で、ボタン操作によって表示画面を切り替える機能を実装しています。

## プロジェクトの目的
- M5Stackの基本的なLCD操作（背景色の変更、テキストの表示、サイズ・色の設定）の習得。
- ボタン入力（BtnA, BtnB, BtnC）による状態遷移（画面切り替え）の実装。

## 機能
- **画面切り替え**: M5Stackの前面にある3つのボタンを使用して、表示内容を切り替えます。
  - **Button A**: 名前と肩書きの表示画面へ移動。
  - **Button B**: プロフィール（興味のある分野）の表示画面へ移動。
  - **Button C**: スキルと趣味の表示画面へ移動。
- **LCD表示**: 各画面で異なる背景色とテキストスタイルを使用しています。

## 開発環境
- **Framework**: Arduino
- **IDE/Platform**: PlatformIO
- **Device**: M5Stack (Basic/Gray/Fire)

## 使い方
1. PlatformIOでプロジェクトを開きます。
2. M5StackをPCに接続します。
3. ビルドと書き込み（Upload）を実行します。
4. M5Stackのボタンを押して、画面が切り替わることを確認してください。

## 関連リソース
- LCD 画面表示:  [m5-docs/docs/ja/api/lcd.md at master · m5stack/m5-docs](https://github.com/m5stack/m5-docs/blob/master/docs/ja/api/lcd.md)
- 公式ドキュメント: [M5Stack Docs](https://docs.m5stack.com/)
- API リファレンス: [M5Stack Arduino Library API](https://github.com/m5stack/M5Stack#functions-and-methods)
- GitHub: [M5Stack Arduino Library](https://github.com/m5stack/M5Stack)
