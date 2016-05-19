package com.latte_project.stb.savethebird;

import android.os.Bundle;
import android.view.Window;
import android.view.View;
import android.content.Intent;

public class HomeActivity extends TabActivity {

    @Override
    // 初期表示
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);

        // タイトル消し
        requestWindowFeature(Window.FEATURE_NO_TITLE);
        setContentView(R.layout.activity_home);
    }

    // ボタン操作
    public void onClick(View view){
        switch (view.getId()){

            case R.id.playBtn:
                Intent intentGame = new Intent(this, GameActivity.class);
                startActivity(intentGame);
                break;
        }
    }
}
