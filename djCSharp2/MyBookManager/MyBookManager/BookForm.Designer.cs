namespace MyBookManager
{
    partial class BookForm
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
            this.components = new System.ComponentModel.Container();
            this.groupBox_bookInfo = new System.Windows.Forms.GroupBox();
            this.button_delete = new System.Windows.Forms.Button();
            this.button_update = new System.Windows.Forms.Button();
            this.button_add = new System.Windows.Forms.Button();
            this.textBox_name = new System.Windows.Forms.TextBox();
            this.textBox_isbn = new System.Windows.Forms.TextBox();
            this.label_name = new System.Windows.Forms.Label();
            this.label_isbn = new System.Windows.Forms.Label();
            this.groupBox_bookList = new System.Windows.Forms.GroupBox();
            this.dataGridView_books = new System.Windows.Forms.DataGridView();
            this.bookBindingSource = new System.Windows.Forms.BindingSource(this.components);
            this.isbnDataGridViewTextBoxColumn = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.nameDataGridViewTextBoxColumn = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.groupBox_bookInfo.SuspendLayout();
            this.groupBox_bookList.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.dataGridView_books)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.bookBindingSource)).BeginInit();
            this.SuspendLayout();
            // 
            // groupBox_bookInfo
            // 
            this.groupBox_bookInfo.Controls.Add(this.button_delete);
            this.groupBox_bookInfo.Controls.Add(this.button_update);
            this.groupBox_bookInfo.Controls.Add(this.button_add);
            this.groupBox_bookInfo.Controls.Add(this.textBox_name);
            this.groupBox_bookInfo.Controls.Add(this.textBox_isbn);
            this.groupBox_bookInfo.Controls.Add(this.label_name);
            this.groupBox_bookInfo.Controls.Add(this.label_isbn);
            this.groupBox_bookInfo.Location = new System.Drawing.Point(12, 8);
            this.groupBox_bookInfo.Name = "groupBox_bookInfo";
            this.groupBox_bookInfo.Size = new System.Drawing.Size(777, 154);
            this.groupBox_bookInfo.TabIndex = 0;
            this.groupBox_bookInfo.TabStop = false;
            this.groupBox_bookInfo.Text = "책 정보";
            // 
            // button_delete
            // 
            this.button_delete.Location = new System.Drawing.Point(245, 106);
            this.button_delete.Name = "button_delete";
            this.button_delete.Size = new System.Drawing.Size(75, 23);
            this.button_delete.TabIndex = 6;
            this.button_delete.Text = "삭제";
            this.button_delete.UseVisualStyleBackColor = true;
            this.button_delete.Click += new System.EventHandler(this.button_delete_Click);
            // 
            // button_update
            // 
            this.button_update.Location = new System.Drawing.Point(133, 106);
            this.button_update.Name = "button_update";
            this.button_update.Size = new System.Drawing.Size(75, 23);
            this.button_update.TabIndex = 5;
            this.button_update.Text = "수정";
            this.button_update.UseVisualStyleBackColor = true;
            this.button_update.Click += new System.EventHandler(this.button_update_Click);
            // 
            // button_add
            // 
            this.button_add.Location = new System.Drawing.Point(21, 106);
            this.button_add.Name = "button_add";
            this.button_add.Size = new System.Drawing.Size(75, 23);
            this.button_add.TabIndex = 4;
            this.button_add.Text = "추가";
            this.button_add.UseVisualStyleBackColor = true;
            this.button_add.Click += new System.EventHandler(this.button_add_Click);
            // 
            // textBox_name
            // 
            this.textBox_name.Location = new System.Drawing.Point(79, 66);
            this.textBox_name.Name = "textBox_name";
            this.textBox_name.Size = new System.Drawing.Size(349, 21);
            this.textBox_name.TabIndex = 3;
            // 
            // textBox_isbn
            // 
            this.textBox_isbn.Location = new System.Drawing.Point(79, 26);
            this.textBox_isbn.Name = "textBox_isbn";
            this.textBox_isbn.Size = new System.Drawing.Size(349, 21);
            this.textBox_isbn.TabIndex = 2;
            // 
            // label_name
            // 
            this.label_name.AutoSize = true;
            this.label_name.Location = new System.Drawing.Point(19, 69);
            this.label_name.Name = "label_name";
            this.label_name.Size = new System.Drawing.Size(29, 12);
            this.label_name.TabIndex = 1;
            this.label_name.Text = "제목";
            // 
            // label_isbn
            // 
            this.label_isbn.AutoSize = true;
            this.label_isbn.Location = new System.Drawing.Point(19, 29);
            this.label_isbn.Name = "label_isbn";
            this.label_isbn.Size = new System.Drawing.Size(33, 12);
            this.label_isbn.TabIndex = 0;
            this.label_isbn.Text = "ISBN";
            // 
            // groupBox_bookList
            // 
            this.groupBox_bookList.Controls.Add(this.dataGridView_books);
            this.groupBox_bookList.Location = new System.Drawing.Point(12, 168);
            this.groupBox_bookList.Name = "groupBox_bookList";
            this.groupBox_bookList.Size = new System.Drawing.Size(777, 270);
            this.groupBox_bookList.TabIndex = 1;
            this.groupBox_bookList.TabStop = false;
            this.groupBox_bookList.Text = "책 목록";
            // 
            // dataGridView_books
            // 
            this.dataGridView_books.AllowUserToAddRows = false;
            this.dataGridView_books.AllowUserToDeleteRows = false;
            this.dataGridView_books.AutoGenerateColumns = false;
            this.dataGridView_books.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            this.dataGridView_books.Columns.AddRange(new System.Windows.Forms.DataGridViewColumn[] {
            this.isbnDataGridViewTextBoxColumn,
            this.nameDataGridViewTextBoxColumn});
            this.dataGridView_books.DataSource = this.bookBindingSource;
            this.dataGridView_books.Location = new System.Drawing.Point(11, 20);
            this.dataGridView_books.Name = "dataGridView_books";
            this.dataGridView_books.ReadOnly = true;
            this.dataGridView_books.RowTemplate.Height = 23;
            this.dataGridView_books.Size = new System.Drawing.Size(750, 229);
            this.dataGridView_books.TabIndex = 0;
            this.dataGridView_books.CellClick += new System.Windows.Forms.DataGridViewCellEventHandler(this.dataGridView_books_CellClick);
            // 
            // bookBindingSource
            // 
            this.bookBindingSource.DataSource = typeof(MyBookManager.Book);
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
            this.nameDataGridViewTextBoxColumn.HeaderText = "제목";
            this.nameDataGridViewTextBoxColumn.Name = "nameDataGridViewTextBoxColumn";
            this.nameDataGridViewTextBoxColumn.ReadOnly = true;
            // 
            // BookForm
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.groupBox_bookList);
            this.Controls.Add(this.groupBox_bookInfo);
            this.Name = "BookForm";
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "도서 관리 화면";
            this.groupBox_bookInfo.ResumeLayout(false);
            this.groupBox_bookInfo.PerformLayout();
            this.groupBox_bookList.ResumeLayout(false);
            ((System.ComponentModel.ISupportInitialize)(this.dataGridView_books)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.bookBindingSource)).EndInit();
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.GroupBox groupBox_bookInfo;
        private System.Windows.Forms.GroupBox groupBox_bookList;
        private System.Windows.Forms.Label label_name;
        private System.Windows.Forms.Label label_isbn;
        private System.Windows.Forms.TextBox textBox_isbn;
        private System.Windows.Forms.TextBox textBox_name;
        private System.Windows.Forms.Button button_delete;
        private System.Windows.Forms.Button button_update;
        private System.Windows.Forms.Button button_add;
        private System.Windows.Forms.DataGridView dataGridView_books;
        private System.Windows.Forms.DataGridViewTextBoxColumn isbnDataGridViewTextBoxColumn;
        private System.Windows.Forms.DataGridViewTextBoxColumn nameDataGridViewTextBoxColumn;
        private System.Windows.Forms.BindingSource bookBindingSource;
    }
}