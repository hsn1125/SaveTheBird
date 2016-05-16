package com.latte_project.stb.savethebird;

import android.app.Activity;
//import android.support.v7.app.AppCompatActivity;
import android.content.Intent;
import android.os.Bundle;
import android.os.Handler;
import android.view.Window;

//public class MainActivity extends AppCompatActivity {
public class MainActivity extends Activity {

    @Override
    // 初期表示
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);

        // タイトル消し
        requestWindowFeature(Window.FEATURE_NO_TITLE);

        setContentView(R.layout.activity_main);

        Handler handler = new Handler();
        handler.postDelayed(new splashHandler(), 2000);
    }

    // 自動画面遷移
    class splashHandler implements Runnable {
        public void run() {
            Intent inte = new Intent(getApplication(), HomeActivity.class);
            startActivity(inte);
            MainActivity.this.finish();
        }
    }
}
