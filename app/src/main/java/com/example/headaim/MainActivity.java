package com.example.headaim;

import android.app.Activity;
import android.os.Bundle;
import android.widget.*;
import android.view.Gravity;

public class MainActivity extends Activity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);

        LinearLayout layout = new LinearLayout(this);
        layout.setOrientation(LinearLayout.VERTICAL);
        layout.setPadding(30, 40, 30, 30);
        layout.setGravity(Gravity.CENTER);

        TextView title = new TextView(this);
        title.setText("HeadAim - Simulador");
        title.setTextSize(26);

        TextView info = new TextView(this);
        info.setText("Simulação independente de seleção de alvo.");
        info.setTextSize(16);

        Button button = new Button(this);
        button.setText("TESTAR SELEÇÃO");

        TextView result = new TextView(this);
        result.setTextSize(18);

        button.setOnClickListener(v ->
            result.setText("Alvo selecionado: 2\nSimulação concluída!")
        );

        layout.addView(title);
        layout.addView(info);
        layout.addView(button);
        layout.addView(result);

        setContentView(layout);
    }
}
