package com.example.project;

import androidx.appcompat.app.AppCompatActivity;
import androidx.appcompat.app.AlertDialog;

import android.content.Context;

import android.os.Bundle;
import android.view.View;
import android.view.ViewGroup;
import android.widget.BaseAdapter;
import android.widget.GridView;
import android.widget.ImageView;


public class SubActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_sub);
        final GridView gv = (GridView) findViewById(R.id.gridView1);
        MyGridAdapter gAdapter = new MyGridAdapter(this);

        gv.setAdapter(gAdapter);

    }


    public class MyGridAdapter extends BaseAdapter {
        Context context;

        int [] fruitID = {R.drawable.p1, R.drawable.p2, R.drawable.p3,
                R.drawable.p4, R.drawable.p5, R.drawable.p6,
                R.drawable.p7, R.drawable.p8, R.drawable.p9
        };

        String [] fruitName = {"Banana", "Baseball Nut", "Caramel Praline Cheesecake",
                "Choc Chip Cookie Dough", "Chocolate", "Chocolate Almond", "Chocolate Chip",
                "Chocolate Mousse Royale", "Coffee Coffee Chip"
        };

        public MyGridAdapter(Context context) {

            this.context = context;
        }

        @Override
        public int getCount() { //중요1//데이터의 갯수 지정
            return fruitID.length;
        }

        @Override
        public Object getItem(int position) {
            return null;
        }

        @Override
        public long getItemId(int position) {
            return 0;
        }

        @Override
        public View getView(int position, View convertView, ViewGroup parent) { //중요2 : 디자인 담당
            ImageView imageView;

            if(convertView == null) {
                imageView = new ImageView(context);
                imageView.setLayoutParams(new GridView.LayoutParams(200, 200));

                imageView.setScaleType(ImageView.ScaleType.CENTER_CROP);
                imageView.setPadding(8,8,8,8);

            }else{
                imageView = (ImageView) convertView;
            }

            imageView.setImageResource(fruitID[position]);

            final int pos = position;
            imageView.setOnClickListener(new View.OnClickListener() {
                @Override
                public void onClick(View v) {
                    View dialogView = (View) View.inflate(SubActivity.this, R.layout.dialog, null);
                    AlertDialog.Builder dlg = new AlertDialog.Builder(SubActivity.this);
                    ImageView ivPoster = (ImageView) dialogView.findViewById(R.id.fruitPoster);

                    ivPoster.setImageResource(fruitID[pos]);
                    dlg.setTitle(fruitName[pos]);
                    dlg.setIcon(R.drawable.ic_launcher_foreground);
                    dlg.setView(dialogView);
                    dlg.setNegativeButton("닫기", null);
                    dlg.show();
                }
            });

            return imageView;
        }
    }











}
