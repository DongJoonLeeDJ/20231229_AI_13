namespace HelloCSharp0050
{
    partial class Form1
    {
        /// <summary>
        /// 필수 디자이너 변수입니다.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// 사용 중인 모든 리소스를 정리합니다.
        /// </summary>
        /// <param name="disposing">관리되는 리소스를 삭제해야 하면 true이고, 그렇지 않으면 false입니다.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form 디자이너에서 생성한 코드

        /// <summary>
        /// 디자이너 지원에 필요한 메서드입니다. 
        /// 이 메서드의 내용을 코드 편집기로 수정하지 마세요.
        /// </summary>
        private void InitializeComponent()
        {
            this.button_thee = new System.Windows.Forms.Button();
            this.label_birthYear_1 = new System.Windows.Forms.Label();
            this.button_1_0 = new System.Windows.Forms.Button();
            this.button_2_0 = new System.Windows.Forms.Button();
            this.button_3_0 = new System.Windows.Forms.Button();
            this.button_4_0 = new System.Windows.Forms.Button();
            this.button_reset = new System.Windows.Forms.Button();
            this.label_1000 = new System.Windows.Forms.Label();
            this.label_100 = new System.Windows.Forms.Label();
            this.label_10 = new System.Windows.Forms.Label();
            this.label_1 = new System.Windows.Forms.Label();
            this.label_birthYear_4 = new System.Windows.Forms.Label();
            this.label_birthYear_3 = new System.Windows.Forms.Label();
            this.label_birthYear_2 = new System.Windows.Forms.Label();
            this.pictureBox_thee = new System.Windows.Forms.PictureBox();
            this.button1 = new System.Windows.Forms.Button();
            this.textBox1 = new System.Windows.Forms.TextBox();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox_thee)).BeginInit();
            this.SuspendLayout();
            // 
            // button_thee
            // 
            this.button_thee.Font = new System.Drawing.Font("에스코어 드림 7 ExtraBold", 18F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.button_thee.Location = new System.Drawing.Point(35, 607);
            this.button_thee.Name = "button_thee";
            this.button_thee.Size = new System.Drawing.Size(249, 126);
            this.button_thee.TabIndex = 0;
            this.button_thee.Text = "당신의 띠는?";
            this.button_thee.UseVisualStyleBackColor = true;
            this.button_thee.Click += new System.EventHandler(this.button_thee_Click);
            // 
            // label_birthYear_1
            // 
            this.label_birthYear_1.AutoSize = true;
            this.label_birthYear_1.Font = new System.Drawing.Font("에스코어 드림 7 ExtraBold", 72F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.label_birthYear_1.Location = new System.Drawing.Point(34, 416);
            this.label_birthYear_1.Name = "label_birthYear_1";
            this.label_birthYear_1.Size = new System.Drawing.Size(0, 133);
            this.label_birthYear_1.TabIndex = 1;
            // 
            // button_1_0
            // 
            this.button_1_0.Font = new System.Drawing.Font("에스코어 드림 7 ExtraBold", 9F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.button_1_0.Location = new System.Drawing.Point(72, 12);
            this.button_1_0.Name = "button_1_0";
            this.button_1_0.Size = new System.Drawing.Size(30, 30);
            this.button_1_0.TabIndex = 3;
            this.button_1_0.Text = "0";
            this.button_1_0.UseVisualStyleBackColor = true;
            this.button_1_0.Click += new System.EventHandler(this.Btn_Click);
            // 
            // button_2_0
            // 
            this.button_2_0.Font = new System.Drawing.Font("에스코어 드림 7 ExtraBold", 9F, System.Drawing.FontStyle.Bold);
            this.button_2_0.Location = new System.Drawing.Point(465, 12);
            this.button_2_0.Name = "button_2_0";
            this.button_2_0.Size = new System.Drawing.Size(30, 30);
            this.button_2_0.TabIndex = 3;
            this.button_2_0.Text = "0";
            this.button_2_0.UseVisualStyleBackColor = true;
            this.button_2_0.Click += new System.EventHandler(this.Btn_Click);
            // 
            // button_3_0
            // 
            this.button_3_0.Font = new System.Drawing.Font("에스코어 드림 7 ExtraBold", 9F, System.Drawing.FontStyle.Bold);
            this.button_3_0.Location = new System.Drawing.Point(834, 12);
            this.button_3_0.Name = "button_3_0";
            this.button_3_0.Size = new System.Drawing.Size(30, 30);
            this.button_3_0.TabIndex = 4;
            this.button_3_0.Text = "0";
            this.button_3_0.UseVisualStyleBackColor = true;
            this.button_3_0.Click += new System.EventHandler(this.Btn_Click);
            // 
            // button_4_0
            // 
            this.button_4_0.Font = new System.Drawing.Font("에스코어 드림 7 ExtraBold", 9F, System.Drawing.FontStyle.Bold);
            this.button_4_0.Location = new System.Drawing.Point(1171, 12);
            this.button_4_0.Name = "button_4_0";
            this.button_4_0.Size = new System.Drawing.Size(30, 30);
            this.button_4_0.TabIndex = 5;
            this.button_4_0.Text = "0";
            this.button_4_0.UseVisualStyleBackColor = true;
            this.button_4_0.Click += new System.EventHandler(this.Btn_Click);
            // 
            // button_reset
            // 
            this.button_reset.Font = new System.Drawing.Font("에스코어 드림 7 ExtraBold", 9F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.button_reset.Location = new System.Drawing.Point(302, 703);
            this.button_reset.Name = "button_reset";
            this.button_reset.Size = new System.Drawing.Size(92, 30);
            this.button_reset.TabIndex = 6;
            this.button_reset.Text = "Reset";
            this.button_reset.UseVisualStyleBackColor = true;
            this.button_reset.Click += new System.EventHandler(this.button_reset_Click);
            // 
            // label_1000
            // 
            this.label_1000.AutoSize = true;
            this.label_1000.Font = new System.Drawing.Font("에스코어 드림 7 ExtraBold", 9F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.label_1000.Location = new System.Drawing.Point(147, 19);
            this.label_1000.Name = "label_1000";
            this.label_1000.Size = new System.Drawing.Size(80, 17);
            this.label_1000.TabIndex = 7;
            this.label_1000.Text = "1000의 자리";
            // 
            // label_100
            // 
            this.label_100.AutoSize = true;
            this.label_100.Font = new System.Drawing.Font("에스코어 드림 7 ExtraBold", 9F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.label_100.Location = new System.Drawing.Point(543, 19);
            this.label_100.Name = "label_100";
            this.label_100.Size = new System.Drawing.Size(72, 17);
            this.label_100.TabIndex = 8;
            this.label_100.Text = "100의 자리";
            // 
            // label_10
            // 
            this.label_10.AutoSize = true;
            this.label_10.Font = new System.Drawing.Font("에스코어 드림 7 ExtraBold", 9F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.label_10.Location = new System.Drawing.Point(903, 19);
            this.label_10.Name = "label_10";
            this.label_10.Size = new System.Drawing.Size(64, 17);
            this.label_10.TabIndex = 9;
            this.label_10.Text = "10의 자리";
            // 
            // label_1
            // 
            this.label_1.AutoSize = true;
            this.label_1.Font = new System.Drawing.Font("에스코어 드림 7 ExtraBold", 9F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.label_1.Location = new System.Drawing.Point(1223, 19);
            this.label_1.Name = "label_1";
            this.label_1.Size = new System.Drawing.Size(56, 17);
            this.label_1.TabIndex = 10;
            this.label_1.Text = "1의 자리";
            // 
            // label_birthYear_4
            // 
            this.label_birthYear_4.AutoSize = true;
            this.label_birthYear_4.Font = new System.Drawing.Font("에스코어 드림 7 ExtraBold", 72F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.label_birthYear_4.Location = new System.Drawing.Point(313, 416);
            this.label_birthYear_4.Name = "label_birthYear_4";
            this.label_birthYear_4.Size = new System.Drawing.Size(0, 133);
            this.label_birthYear_4.TabIndex = 11;
            // 
            // label_birthYear_3
            // 
            this.label_birthYear_3.AutoSize = true;
            this.label_birthYear_3.Font = new System.Drawing.Font("에스코어 드림 7 ExtraBold", 72F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.label_birthYear_3.Location = new System.Drawing.Point(216, 416);
            this.label_birthYear_3.Name = "label_birthYear_3";
            this.label_birthYear_3.Size = new System.Drawing.Size(0, 133);
            this.label_birthYear_3.TabIndex = 12;
            // 
            // label_birthYear_2
            // 
            this.label_birthYear_2.AutoSize = true;
            this.label_birthYear_2.Font = new System.Drawing.Font("에스코어 드림 7 ExtraBold", 72F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.label_birthYear_2.Location = new System.Drawing.Point(127, 416);
            this.label_birthYear_2.Name = "label_birthYear_2";
            this.label_birthYear_2.Size = new System.Drawing.Size(0, 133);
            this.label_birthYear_2.TabIndex = 13;
            // 
            // pictureBox_thee
            // 
            this.pictureBox_thee.Location = new System.Drawing.Point(453, 333);
            this.pictureBox_thee.Name = "pictureBox_thee";
            this.pictureBox_thee.Size = new System.Drawing.Size(400, 400);
            this.pictureBox_thee.SizeMode = System.Windows.Forms.PictureBoxSizeMode.Zoom;
            this.pictureBox_thee.TabIndex = 14;
            this.pictureBox_thee.TabStop = false;
            // 
            // button1
            // 
            this.button1.Font = new System.Drawing.Font("에스코어 드림 7 ExtraBold", 18F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.button1.Location = new System.Drawing.Point(878, 333);
            this.button1.Name = "button1";
            this.button1.Size = new System.Drawing.Size(249, 126);
            this.button1.TabIndex = 15;
            this.button1.Text = "당신의 띠는?";
            this.button1.UseVisualStyleBackColor = true;
            this.button1.Click += new System.EventHandler(this.button1_Click);
            // 
            // textBox1
            // 
            this.textBox1.Location = new System.Drawing.Point(878, 477);
            this.textBox1.Name = "textBox1";
            this.textBox1.Size = new System.Drawing.Size(249, 21);
            this.textBox1.TabIndex = 16;
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(1299, 767);
            this.Controls.Add(this.textBox1);
            this.Controls.Add(this.button1);
            this.Controls.Add(this.pictureBox_thee);
            this.Controls.Add(this.label_birthYear_2);
            this.Controls.Add(this.label_birthYear_3);
            this.Controls.Add(this.label_birthYear_4);
            this.Controls.Add(this.label_1);
            this.Controls.Add(this.label_10);
            this.Controls.Add(this.label_100);
            this.Controls.Add(this.label_1000);
            this.Controls.Add(this.button_reset);
            this.Controls.Add(this.button_4_0);
            this.Controls.Add(this.button_3_0);
            this.Controls.Add(this.button_2_0);
            this.Controls.Add(this.button_1_0);
            this.Controls.Add(this.label_birthYear_1);
            this.Controls.Add(this.button_thee);
            this.Name = "Form1";
            this.Text = "Form1";
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox_thee)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Button button_thee;
        private System.Windows.Forms.Label label_birthYear_1;
        private System.Windows.Forms.Button button_1_0;
        private System.Windows.Forms.Button button_2_0;
        private System.Windows.Forms.Button button_3_0;
        private System.Windows.Forms.Button button_4_0;
        private System.Windows.Forms.Button button_reset;
        private System.Windows.Forms.Label label_1000;
        private System.Windows.Forms.Label label_100;
        private System.Windows.Forms.Label label_10;
        private System.Windows.Forms.Label label_1;
        private System.Windows.Forms.Label label_birthYear_4;
        private System.Windows.Forms.Label label_birthYear_3;
        private System.Windows.Forms.Label label_birthYear_2;
        private System.Windows.Forms.PictureBox pictureBox_thee;
        private System.Windows.Forms.Button button1;
        private System.Windows.Forms.TextBox textBox1;
    }
}

