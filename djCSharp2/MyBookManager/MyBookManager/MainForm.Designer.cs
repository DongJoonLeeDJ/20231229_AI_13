namespace MyBookManager
{
    partial class MainForm
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
            this.components = new System.ComponentModel.Container();
            this.menuStrip_main = new System.Windows.Forms.MenuStrip();
            this.ToolStripMenuItem_bookManager = new System.Windows.Forms.ToolStripMenuItem();
            this.ToolStripMenuItem_userManager = new System.Windows.Forms.ToolStripMenuItem();
            this.groupBox_status = new System.Windows.Forms.GroupBox();
            this.label_delayedBookCount = new System.Windows.Forms.Label();
            this.label_borrowedBookCount = new System.Windows.Forms.Label();
            this.label_totalUserCount = new System.Windows.Forms.Label();
            this.label_totalBookCount = new System.Windows.Forms.Label();
            this.groupBox_bookUser = new System.Windows.Forms.GroupBox();
            this.button_return = new System.Windows.Forms.Button();
            this.button_borrow = new System.Windows.Forms.Button();
            this.textBox_id = new System.Windows.Forms.TextBox();
            this.textBox_name = new System.Windows.Forms.TextBox();
            this.textBox_isbn = new System.Windows.Forms.TextBox();
            this.label_userId = new System.Windows.Forms.Label();
            this.label_bookName = new System.Windows.Forms.Label();
            this.label_bookIsbn = new System.Windows.Forms.Label();
            this.groupBox_books = new System.Windows.Forms.GroupBox();
            this.dataGridView_books = new System.Windows.Forms.DataGridView();
            this.groupBox_users = new System.Windows.Forms.GroupBox();
            this.dataGridView_users = new System.Windows.Forms.DataGridView();
            this.timer_now = new System.Windows.Forms.Timer(this.components);
            this.toolStrip_displayNow = new System.Windows.Forms.ToolStrip();
            this.toolStripLabel_now = new System.Windows.Forms.ToolStripLabel();
            this.idDataGridViewTextBoxColumn = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.nameDataGridViewTextBoxColumn1 = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.userBindingSource = new System.Windows.Forms.BindingSource(this.components);
            this.isbnDataGridViewTextBoxColumn = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.nameDataGridViewTextBoxColumn = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.userIdDataGridViewTextBoxColumn = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.userNameDataGridViewTextBoxColumn = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.isBorrowedDataGridViewCheckBoxColumn = new System.Windows.Forms.DataGridViewCheckBoxColumn();
            this.borrowedAtDataGridViewTextBoxColumn = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.bookBindingSource = new System.Windows.Forms.BindingSource(this.components);
            this.menuStrip_main.SuspendLayout();
            this.groupBox_status.SuspendLayout();
            this.groupBox_bookUser.SuspendLayout();
            this.groupBox_books.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.dataGridView_books)).BeginInit();
            this.groupBox_users.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.dataGridView_users)).BeginInit();
            this.toolStrip_displayNow.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.userBindingSource)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.bookBindingSource)).BeginInit();
            this.SuspendLayout();
            // 
            // menuStrip_main
            // 
            this.menuStrip_main.Items.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.ToolStripMenuItem_bookManager,
            this.ToolStripMenuItem_userManager});
            this.menuStrip_main.Location = new System.Drawing.Point(0, 0);
            this.menuStrip_main.Name = "menuStrip_main";
            this.menuStrip_main.Size = new System.Drawing.Size(804, 24);
            this.menuStrip_main.TabIndex = 0;
            this.menuStrip_main.Text = "menuStrip1";
            // 
            // ToolStripMenuItem_bookManager
            // 
            this.ToolStripMenuItem_bookManager.Name = "ToolStripMenuItem_bookManager";
            this.ToolStripMenuItem_bookManager.Size = new System.Drawing.Size(67, 20);
            this.ToolStripMenuItem_bookManager.Text = "도서관리";
            this.ToolStripMenuItem_bookManager.Click += new System.EventHandler(this.ToolStripMenuItem_bookManager_Click);
            // 
            // ToolStripMenuItem_userManager
            // 
            this.ToolStripMenuItem_userManager.Name = "ToolStripMenuItem_userManager";
            this.ToolStripMenuItem_userManager.Size = new System.Drawing.Size(79, 20);
            this.ToolStripMenuItem_userManager.Text = "사용자관리";
            this.ToolStripMenuItem_userManager.Click += new System.EventHandler(this.ToolStripMenuItem_userManager_Click);
            // 
            // groupBox_status
            // 
            this.groupBox_status.Controls.Add(this.label_delayedBookCount);
            this.groupBox_status.Controls.Add(this.label_borrowedBookCount);
            this.groupBox_status.Controls.Add(this.label_totalUserCount);
            this.groupBox_status.Controls.Add(this.label_totalBookCount);
            this.groupBox_status.Location = new System.Drawing.Point(13, 28);
            this.groupBox_status.Name = "groupBox_status";
            this.groupBox_status.Size = new System.Drawing.Size(336, 191);
            this.groupBox_status.TabIndex = 1;
            this.groupBox_status.TabStop = false;
            this.groupBox_status.Text = "도서 및 회원 현황";
            // 
            // label_delayedBookCount
            // 
            this.label_delayedBookCount.AutoSize = true;
            this.label_delayedBookCount.Location = new System.Drawing.Point(9, 147);
            this.label_delayedBookCount.Name = "label_delayedBookCount";
            this.label_delayedBookCount.Size = new System.Drawing.Size(131, 12);
            this.label_delayedBookCount.TabIndex = 3;
            this.label_delayedBookCount.Text = "연체 중인 도서의 수 : -";
            // 
            // label_borrowedBookCount
            // 
            this.label_borrowedBookCount.AutoSize = true;
            this.label_borrowedBookCount.Location = new System.Drawing.Point(9, 106);
            this.label_borrowedBookCount.Name = "label_borrowedBookCount";
            this.label_borrowedBookCount.Size = new System.Drawing.Size(131, 12);
            this.label_borrowedBookCount.TabIndex = 2;
            this.label_borrowedBookCount.Text = "대출 중인 도서의 수 : -";
            // 
            // label_totalUserCount
            // 
            this.label_totalUserCount.AutoSize = true;
            this.label_totalUserCount.Location = new System.Drawing.Point(9, 69);
            this.label_totalUserCount.Name = "label_totalUserCount";
            this.label_totalUserCount.Size = new System.Drawing.Size(91, 12);
            this.label_totalUserCount.TabIndex = 1;
            this.label_totalUserCount.Text = "전체 회원 수 : -";
            // 
            // label_totalBookCount
            // 
            this.label_totalBookCount.AutoSize = true;
            this.label_totalBookCount.Location = new System.Drawing.Point(9, 33);
            this.label_totalBookCount.Name = "label_totalBookCount";
            this.label_totalBookCount.Size = new System.Drawing.Size(91, 12);
            this.label_totalBookCount.TabIndex = 0;
            this.label_totalBookCount.Text = "전체 도서 수 : -";
            // 
            // groupBox_bookUser
            // 
            this.groupBox_bookUser.Controls.Add(this.button_return);
            this.groupBox_bookUser.Controls.Add(this.button_borrow);
            this.groupBox_bookUser.Controls.Add(this.textBox_id);
            this.groupBox_bookUser.Controls.Add(this.textBox_name);
            this.groupBox_bookUser.Controls.Add(this.textBox_isbn);
            this.groupBox_bookUser.Controls.Add(this.label_userId);
            this.groupBox_bookUser.Controls.Add(this.label_bookName);
            this.groupBox_bookUser.Controls.Add(this.label_bookIsbn);
            this.groupBox_bookUser.Location = new System.Drawing.Point(355, 28);
            this.groupBox_bookUser.Name = "groupBox_bookUser";
            this.groupBox_bookUser.Size = new System.Drawing.Size(433, 191);
            this.groupBox_bookUser.TabIndex = 2;
            this.groupBox_bookUser.TabStop = false;
            this.groupBox_bookUser.Text = "도서 및 회원 선택";
            // 
            // button_return
            // 
            this.button_return.Location = new System.Drawing.Point(328, 66);
            this.button_return.Name = "button_return";
            this.button_return.Size = new System.Drawing.Size(99, 23);
            this.button_return.TabIndex = 11;
            this.button_return.Text = "반납";
            this.button_return.UseVisualStyleBackColor = true;
            this.button_return.Click += new System.EventHandler(this.button_return_Click);
            // 
            // button_borrow
            // 
            this.button_borrow.Location = new System.Drawing.Point(327, 28);
            this.button_borrow.Name = "button_borrow";
            this.button_borrow.Size = new System.Drawing.Size(99, 23);
            this.button_borrow.TabIndex = 10;
            this.button_borrow.Text = "대출";
            this.button_borrow.UseVisualStyleBackColor = true;
            this.button_borrow.Click += new System.EventHandler(this.button_borrow_Click);
            // 
            // textBox_id
            // 
            this.textBox_id.Location = new System.Drawing.Point(83, 103);
            this.textBox_id.Name = "textBox_id";
            this.textBox_id.Size = new System.Drawing.Size(238, 21);
            this.textBox_id.TabIndex = 9;
            // 
            // textBox_name
            // 
            this.textBox_name.Location = new System.Drawing.Point(83, 66);
            this.textBox_name.Name = "textBox_name";
            this.textBox_name.Size = new System.Drawing.Size(238, 21);
            this.textBox_name.TabIndex = 8;
            // 
            // textBox_isbn
            // 
            this.textBox_isbn.Location = new System.Drawing.Point(83, 30);
            this.textBox_isbn.Name = "textBox_isbn";
            this.textBox_isbn.Size = new System.Drawing.Size(238, 21);
            this.textBox_isbn.TabIndex = 7;
            // 
            // label_userId
            // 
            this.label_userId.AutoSize = true;
            this.label_userId.Location = new System.Drawing.Point(19, 106);
            this.label_userId.Name = "label_userId";
            this.label_userId.Size = new System.Drawing.Size(44, 12);
            this.label_userId.TabIndex = 6;
            this.label_userId.Text = "회원 ID";
            // 
            // label_bookName
            // 
            this.label_bookName.AutoSize = true;
            this.label_bookName.Location = new System.Drawing.Point(19, 69);
            this.label_bookName.Name = "label_bookName";
            this.label_bookName.Size = new System.Drawing.Size(45, 12);
            this.label_bookName.TabIndex = 5;
            this.label_bookName.Text = "책 제목";
            // 
            // label_bookIsbn
            // 
            this.label_bookIsbn.AutoSize = true;
            this.label_bookIsbn.Location = new System.Drawing.Point(19, 33);
            this.label_bookIsbn.Name = "label_bookIsbn";
            this.label_bookIsbn.Size = new System.Drawing.Size(49, 12);
            this.label_bookIsbn.TabIndex = 4;
            this.label_bookIsbn.Text = "책 ISBN";
            // 
            // groupBox_books
            // 
            this.groupBox_books.Controls.Add(this.dataGridView_books);
            this.groupBox_books.Location = new System.Drawing.Point(13, 226);
            this.groupBox_books.Name = "groupBox_books";
            this.groupBox_books.Size = new System.Drawing.Size(775, 186);
            this.groupBox_books.TabIndex = 3;
            this.groupBox_books.TabStop = false;
            this.groupBox_books.Text = "도서 목록";
            // 
            // dataGridView_books
            // 
            this.dataGridView_books.AllowUserToAddRows = false;
            this.dataGridView_books.AllowUserToDeleteRows = false;
            this.dataGridView_books.AutoGenerateColumns = false;
            this.dataGridView_books.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            this.dataGridView_books.Columns.AddRange(new System.Windows.Forms.DataGridViewColumn[] {
            this.isbnDataGridViewTextBoxColumn,
            this.nameDataGridViewTextBoxColumn,
            this.userIdDataGridViewTextBoxColumn,
            this.userNameDataGridViewTextBoxColumn,
            this.isBorrowedDataGridViewCheckBoxColumn,
            this.borrowedAtDataGridViewTextBoxColumn});
            this.dataGridView_books.DataSource = this.bookBindingSource;
            this.dataGridView_books.Location = new System.Drawing.Point(7, 21);
            this.dataGridView_books.Name = "dataGridView_books";
            this.dataGridView_books.ReadOnly = true;
            this.dataGridView_books.RowTemplate.Height = 23;
            this.dataGridView_books.Size = new System.Drawing.Size(761, 150);
            this.dataGridView_books.TabIndex = 0;
            this.dataGridView_books.CellClick += new System.Windows.Forms.DataGridViewCellEventHandler(this.dataGridView_books_CellClick);
            // 
            // groupBox_users
            // 
            this.groupBox_users.Controls.Add(this.dataGridView_users);
            this.groupBox_users.Location = new System.Drawing.Point(19, 418);
            this.groupBox_users.Name = "groupBox_users";
            this.groupBox_users.Size = new System.Drawing.Size(769, 180);
            this.groupBox_users.TabIndex = 4;
            this.groupBox_users.TabStop = false;
            this.groupBox_users.Text = "회원 목록";
            // 
            // dataGridView_users
            // 
            this.dataGridView_users.AllowUserToAddRows = false;
            this.dataGridView_users.AllowUserToDeleteRows = false;
            this.dataGridView_users.AutoGenerateColumns = false;
            this.dataGridView_users.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            this.dataGridView_users.Columns.AddRange(new System.Windows.Forms.DataGridViewColumn[] {
            this.idDataGridViewTextBoxColumn,
            this.nameDataGridViewTextBoxColumn1});
            this.dataGridView_users.DataSource = this.userBindingSource;
            this.dataGridView_users.Location = new System.Drawing.Point(7, 21);
            this.dataGridView_users.Name = "dataGridView_users";
            this.dataGridView_users.ReadOnly = true;
            this.dataGridView_users.RowTemplate.Height = 23;
            this.dataGridView_users.Size = new System.Drawing.Size(397, 150);
            this.dataGridView_users.TabIndex = 0;
            this.dataGridView_users.CellClick += new System.Windows.Forms.DataGridViewCellEventHandler(this.dataGridView_users_CellClick);
            // 
            // timer_now
            // 
            this.timer_now.Enabled = true;
            this.timer_now.Interval = 1000;
            this.timer_now.Tick += new System.EventHandler(this.timer_now_Tick);
            // 
            // toolStrip_displayNow
            // 
            this.toolStrip_displayNow.Dock = System.Windows.Forms.DockStyle.Bottom;
            this.toolStrip_displayNow.Items.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.toolStripLabel_now});
            this.toolStrip_displayNow.Location = new System.Drawing.Point(0, 602);
            this.toolStrip_displayNow.Name = "toolStrip_displayNow";
            this.toolStrip_displayNow.Size = new System.Drawing.Size(804, 25);
            this.toolStrip_displayNow.TabIndex = 5;
            // 
            // toolStripLabel_now
            // 
            this.toolStripLabel_now.Name = "toolStripLabel_now";
            this.toolStripLabel_now.Size = new System.Drawing.Size(0, 22);
            // 
            // idDataGridViewTextBoxColumn
            // 
            this.idDataGridViewTextBoxColumn.DataPropertyName = "id";
            this.idDataGridViewTextBoxColumn.HeaderText = "ID";
            this.idDataGridViewTextBoxColumn.Name = "idDataGridViewTextBoxColumn";
            this.idDataGridViewTextBoxColumn.ReadOnly = true;
            // 
            // nameDataGridViewTextBoxColumn1
            // 
            this.nameDataGridViewTextBoxColumn1.DataPropertyName = "name";
            this.nameDataGridViewTextBoxColumn1.HeaderText = "이름";
            this.nameDataGridViewTextBoxColumn1.Name = "nameDataGridViewTextBoxColumn1";
            this.nameDataGridViewTextBoxColumn1.ReadOnly = true;
            // 
            // userBindingSource
            // 
            this.userBindingSource.DataSource = typeof(MyBookManager.User);
            // 
            // isbnDataGridViewTextBoxColumn
            // 
            this.isbnDataGridViewTextBoxColumn.DataPropertyName = "isbn";
            this.isbnDataGridViewTextBoxColumn.HeaderText = "ISBN";
            this.isbnDataGridViewTextBoxColumn.Name = "isbnDataGridViewTextBoxColumn";
            this.isbnDataGridViewTextBoxColumn.ReadOnly = true;
            // 
            // nameDataGridViewTextBoxColumn
            // 
            this.nameDataGridViewTextBoxColumn.DataPropertyName = "name";
            this.nameDataGridViewTextBoxColumn.HeaderText = "책 제목";
            this.nameDataGridViewTextBoxColumn.Name = "nameDataGridViewTextBoxColumn";
            this.nameDataGridViewTextBoxColumn.ReadOnly = true;
            // 
            // userIdDataGridViewTextBoxColumn
            // 
            this.userIdDataGridViewTextBoxColumn.DataPropertyName = "userId";
            this.userIdDataGridViewTextBoxColumn.HeaderText = "회원 ID";
            this.userIdDataGridViewTextBoxColumn.Name = "userIdDataGridViewTextBoxColumn";
            this.userIdDataGridViewTextBoxColumn.ReadOnly = true;
            // 
            // userNameDataGridViewTextBoxColumn
            // 
            this.userNameDataGridViewTextBoxColumn.DataPropertyName = "userName";
            this.userNameDataGridViewTextBoxColumn.HeaderText = "회원 이름";
            this.userNameDataGridViewTextBoxColumn.Name = "userNameDataGridViewTextBoxColumn";
            this.userNameDataGridViewTextBoxColumn.ReadOnly = true;
            // 
            // isBorrowedDataGridViewCheckBoxColumn
            // 
            this.isBorrowedDataGridViewCheckBoxColumn.DataPropertyName = "isBorrowed";
            this.isBorrowedDataGridViewCheckBoxColumn.HeaderText = "대출 여부";
            this.isBorrowedDataGridViewCheckBoxColumn.Name = "isBorrowedDataGridViewCheckBoxColumn";
            this.isBorrowedDataGridViewCheckBoxColumn.ReadOnly = true;
            // 
            // borrowedAtDataGridViewTextBoxColumn
            // 
            this.borrowedAtDataGridViewTextBoxColumn.DataPropertyName = "borrowedAt";
            this.borrowedAtDataGridViewTextBoxColumn.HeaderText = "대출 날짜";
            this.borrowedAtDataGridViewTextBoxColumn.Name = "borrowedAtDataGridViewTextBoxColumn";
            this.borrowedAtDataGridViewTextBoxColumn.ReadOnly = true;
            // 
            // bookBindingSource
            // 
            this.bookBindingSource.DataSource = typeof(MyBookManager.Book);
            // 
            // MainForm
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(804, 627);
            this.Controls.Add(this.toolStrip_displayNow);
            this.Controls.Add(this.groupBox_users);
            this.Controls.Add(this.groupBox_books);
            this.Controls.Add(this.groupBox_bookUser);
            this.Controls.Add(this.groupBox_status);
            this.Controls.Add(this.menuStrip_main);
            this.MainMenuStrip = this.menuStrip_main;
            this.Name = "MainForm";
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "도서 관리 프로그램";
            this.menuStrip_main.ResumeLayout(false);
            this.menuStrip_main.PerformLayout();
            this.groupBox_status.ResumeLayout(false);
            this.groupBox_status.PerformLayout();
            this.groupBox_bookUser.ResumeLayout(false);
            this.groupBox_bookUser.PerformLayout();
            this.groupBox_books.ResumeLayout(false);
            ((System.ComponentModel.ISupportInitialize)(this.dataGridView_books)).EndInit();
            this.groupBox_users.ResumeLayout(false);
            ((System.ComponentModel.ISupportInitialize)(this.dataGridView_users)).EndInit();
            this.toolStrip_displayNow.ResumeLayout(false);
            this.toolStrip_displayNow.PerformLayout();
            ((System.ComponentModel.ISupportInitialize)(this.userBindingSource)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.bookBindingSource)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.MenuStrip menuStrip_main;
        private System.Windows.Forms.ToolStripMenuItem ToolStripMenuItem_bookManager;
        private System.Windows.Forms.ToolStripMenuItem ToolStripMenuItem_userManager;
        private System.Windows.Forms.GroupBox groupBox_status;
        private System.Windows.Forms.GroupBox groupBox_bookUser;
        private System.Windows.Forms.GroupBox groupBox_books;
        private System.Windows.Forms.GroupBox groupBox_users;
        private System.Windows.Forms.Timer timer_now;
        private System.Windows.Forms.ToolStrip toolStrip_displayNow;
        private System.Windows.Forms.ToolStripLabel toolStripLabel_now;
        private System.Windows.Forms.Label label_delayedBookCount;
        private System.Windows.Forms.Label label_borrowedBookCount;
        private System.Windows.Forms.Label label_totalUserCount;
        private System.Windows.Forms.Label label_totalBookCount;
        private System.Windows.Forms.Button button_return;
        private System.Windows.Forms.Button button_borrow;
        private System.Windows.Forms.TextBox textBox_id;
        private System.Windows.Forms.TextBox textBox_name;
        private System.Windows.Forms.TextBox textBox_isbn;
        private System.Windows.Forms.Label label_userId;
        private System.Windows.Forms.Label label_bookName;
        private System.Windows.Forms.Label label_bookIsbn;
        private System.Windows.Forms.DataGridView dataGridView_books;
        private System.Windows.Forms.DataGridView dataGridView_users;
        private System.Windows.Forms.BindingSource bookBindingSource;
        private System.Windows.Forms.BindingSource userBindingSource;
        private System.Windows.Forms.DataGridViewTextBoxColumn isbnDataGridViewTextBoxColumn;
        private System.Windows.Forms.DataGridViewTextBoxColumn nameDataGridViewTextBoxColumn;
        private System.Windows.Forms.DataGridViewTextBoxColumn userIdDataGridViewTextBoxColumn;
        private System.Windows.Forms.DataGridViewTextBoxColumn userNameDataGridViewTextBoxColumn;
        private System.Windows.Forms.DataGridViewCheckBoxColumn isBorrowedDataGridViewCheckBoxColumn;
        private System.Windows.Forms.DataGridViewTextBoxColumn borrowedAtDataGridViewTextBoxColumn;
        private System.Windows.Forms.DataGridViewTextBoxColumn idDataGridViewTextBoxColumn;
        private System.Windows.Forms.DataGridViewTextBoxColumn nameDataGridViewTextBoxColumn1;
    }
}

