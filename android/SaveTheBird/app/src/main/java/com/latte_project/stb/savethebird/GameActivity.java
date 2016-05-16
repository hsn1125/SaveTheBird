package com.latte_project.stb.savethebird;

import android.content.Intent;
import android.os.Bundle;
import android.view.View;

public class GameActivity extends TabActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_game);
    }

    // ボタン操作
    public void onClick(View view){
        switch (view.getId()){

            case R.id.menuBtn:
                Intent intentHome = new Intent(this, HomeActivity.class);
                startActivity(intentHome);
                break;
        }
    }
}
