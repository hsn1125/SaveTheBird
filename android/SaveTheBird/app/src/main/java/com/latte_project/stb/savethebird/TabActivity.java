package com.latte_project.stb.savethebird;

/**
 * Created by arimatakeshi on 16/05/16.
 */

import android.app.Activity;
import android.os.Bundle;
import android.view.Window;
import android.view.View;
import android.content.Intent;

public class TabActivity extends Activity{

    // タブメニュー操作
    public void tabClick(View view){
        switch (view.getId()){
            case R.id.homeBtn:
                Intent intentHome = new Intent(this, HomeActivity.class);
                startActivity(intentHome);
                break;

            case R.id.characterBtn:
                Intent intentCharacter = new Intent(this, CharacterSelectActivity.class);
                startActivity(intentCharacter);
                break;

            case R.id.settingBtn:
                Intent intentSetting = new Intent(this, SettingActivity.class);
                startActivity(intentSetting);
                break;

            case R.id.playBtn:
                Intent intentGame = new Intent(this, GameActivity.class);
                startActivity(intentGame);
                break;
        }
    }
}
