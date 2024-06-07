namespace MyBookManager
{
    partial class UserForm
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.groupBox_userList = new System.Windows.Forms.GroupBox();
            this.groupBox_userInfo = new System.Windows.Forms.GroupBox();
            this.dataGridView_users = new System.Windows.Forms.DataGridView();
            this.label_id = new System.Windows.Forms.Label();
            this.label_name = new System.Windows.Forms.Label();
            this.textBox_id = new System.Windows.Forms.TextBox();
            this.textBox_name = new System.Windows.Forms.TextBox();
            this.button_add = new System.Windows.Forms.Button();
            this.button_update = new System.Windows.Forms.Button();
            this.button_delete = new System.Windows.Forms.Button();
            this.groupBox_userList.SuspendLayout();
            this.groupBox_userInfo.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.dataGridView_users)).BeginInit();
            this.SuspendLayout();
            // 
            // groupBox_userList
            // 
            this.groupBox_userList.Controls.Add(this.dataGridView_users);
            this.groupBox_userList.Location = new System.Drawing.Point(13, 13);
            this.groupBox_userList.Name = "groupBox_userList";
            this.groupBox_userList.Size = new System.Drawing.Size(376, 435);
            this.groupBox_userList.TabIndex = 0;
            this.groupBox_userList.TabStop = false;
            this.groupBox_userList.Text = "회원 목록";
            // 
            // groupBox_userInfo
            // 
            this.groupBox_userInfo.Controls.Add(this.button_delete);
            this.groupBox_userInfo.Controls.Add(this.button_update);
            this.groupBox_userInfo.Controls.Add(this.button_add);
            this.groupBox_userInfo.Controls.Add(this.textBox_name);
            this.groupBox_userInfo.Controls.Add(this.textBox_id);
            this.groupBox_userInfo.Controls.Add(this.label_name);
            this.groupBox_userInfo.Controls.Add(this.label_id);
            this.groupBox_userInfo.Location = new System.Drawing.Point(412, 13);
            this.groupBox_userInfo.Name = "groupBox_userInfo";
            this.groupBox_userInfo.Size = new System.Drawing.Size(376, 435);
            this.groupBox_userInfo.TabIndex = 1;
            this.groupBox_userInfo.TabStop = false;
            this.groupBox_userInfo.Text = "정보";
            // 
            // dataGridView_users
            // 
            this.dataGridView_users.AllowUserToAddRows = false;
            this.dataGridView_users.AllowUserToDeleteRows = false;
            this.dataGridView_users.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            this.dataGridView_users.Location = new System.Drawing.Point(7, 21);
            this.dataGridView_users.Name = "dataGridView_users";
            this.dataGridView_users.ReadOnly = true;
            this.dataGridView_users.RowTemplate.Height = 23;
            this.dataGridView_users.Size = new System.Drawing.Size(352, 404);
            this.dataGridView_users.TabIndex = 0;
            // 
            // label_id
            // 
            this.label_id.AutoSize = true;
            this.label_id.Location = new System.Drawing.Point(18, 35);
            this.label_id.Name = "label_id";
            this.label_id.Size = new System.Drawing.Size(16, 12);
            this.label_id.TabIndex = 0;
            this.label_id.Text = "ID";
            // 
            // label_name
            // 
            this.label_name.AutoSize = true;
            this.label_name.Location = new System.Drawing.Point(18, 73);
            this.label_name.Name = "label_name";
            this.label_name.Size = new System.Drawing.Size(29, 12);
            this.label_name.TabIndex = 1;
            this.label_name.Text = "이름";
            // 
            // textBox_id
            // 
            this.textBox_id.Location = new System.Drawing.Point(77, 32);
            this.textBox_id.Name = "textBox_id";
            this.textBox_id.Size = new System.Drawing.Size(272, 21);
            this.textBox_id.TabIndex = 2;
            // 
            // textBox_name
            // 
            this.textBox_name.Location = new System.Drawing.Point(77, 70);
            this.textBox_name.Name = "textBox_name";
            this.textBox_name.Size = new System.Drawing.Size(272, 21);
            this.textBox_name.TabIndex = 3;
            // 
            // button_add
            // 
            this.button_add.Location = new System.Drawing.Point(7, 114);
            this.button_add.Name = "button_add";
            this.button_add.Size = new System.Drawing.Size(75, 23);
            this.button_add.TabIndex = 4;
            this.button_add.Text = "추가";
            this.button_add.UseVisualStyleBackColor = true;
            // 
            // button_update
            // 
            this.button_update.Location = new System.Drawing.Point(98, 114);
            this.button_update.Name = "button_update";
            this.button_update.Size = new System.Drawing.Size(75, 23);
            this.button_update.TabIndex = 5;
            this.button_update.Text = "수정";
            this.button_update.UseVisualStyleBackColor = true;
            // 
            // button_delete
            // 
            this.button_delete.Location = new System.Drawing.Point(190, 114);
            this.button_delete.Name = "button_delete";
            this.button_delete.Size = new System.Drawing.Size(75, 23);
            this.button_delete.TabIndex = 6;
            this.button_delete.Text = "삭제";
            this.button_delete.UseVisualStyleBackColor = true;
            // 
            // UserForm
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.groupBox_userInfo);
            this.Controls.Add(this.groupBox_userList);
            this.Name = "UserForm";
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "회원 관리";
            this.groupBox_userList.ResumeLayout(false);
            this.groupBox_userInfo.ResumeLayout(false);
            this.groupBox_userInfo.PerformLayout();
            ((System.ComponentModel.ISupportInitialize)(this.dataGridView_users)).EndInit();
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.GroupBox groupBox_userList;
        private System.Windows.Forms.DataGridView dataGridView_users;
        private System.Windows.Forms.GroupBox groupBox_userInfo;
        private System.Windows.Forms.Button button_delete;
        private System.Windows.Forms.Button button_update;
        private System.Windows.Forms.Button button_add;
        private System.Windows.Forms.TextBox textBox_name;
        private System.Windows.Forms.TextBox textBox_id;
        private System.Windows.Forms.Label label_name;
        private System.Windows.Forms.Label label_id;
    }
}