procedure InitializeComponent;
    begin
        var resources: System.ComponentModel.ComponentResourceManager := new System.ComponentModel.ComponentResourceManager(typeof(ContribForm));
        var treeNode11: System.Windows.Forms.TreeNode := new System.Windows.Forms.TreeNode('Michael Agarkov');
        var treeNode12: System.Windows.Forms.TreeNode := new System.Windows.Forms.TreeNode('Maksim Chernyshkov');
        self.panel1 := new System.Windows.Forms.Panel();
        self.pictureBox2 := new System.Windows.Forms.PictureBox();
        self.pictureBox1 := new System.Windows.Forms.PictureBox();
        self.label1 := new System.Windows.Forms.Label();
        self.treeView1 := new System.Windows.Forms.TreeView();
        self.panel2 := new System.Windows.Forms.Panel();
        self.button1 := new System.Windows.Forms.Button();
        self.panel3 := new System.Windows.Forms.Panel();
        self.linkLabel3 := new System.Windows.Forms.LinkLabel();
        self.label2 := new System.Windows.Forms.Label();
        self.panel4 := new System.Windows.Forms.Panel();
        self.linkLabel4 := new System.Windows.Forms.LinkLabel();
        self.label3 := new System.Windows.Forms.Label();
        self.panel1.SuspendLayout();
        (System.ComponentModel.ISupportInitialize(self.pictureBox2)).BeginInit();
        (System.ComponentModel.ISupportInitialize(self.pictureBox1)).BeginInit();
        self.panel2.SuspendLayout();
        self.panel3.SuspendLayout();
        self.panel4.SuspendLayout();
        self.SuspendLayout();
        // 
        // panel1
        // 
        self.panel1.BackgroundImage := (System.Drawing.Image(resources.GetObject('panel1.BackgroundImage')));
        self.panel1.BackgroundImageLayout := System.Windows.Forms.ImageLayout.Stretch;
        self.panel1.Controls.Add(self.pictureBox2);
        self.panel1.Controls.Add(self.pictureBox1);
        self.panel1.Controls.Add(self.label1);
        self.panel1.Dock := System.Windows.Forms.DockStyle.Top;
        self.panel1.Location := new System.Drawing.Point(0, 0);
        self.panel1.Name := 'panel1';
        self.panel1.Size := new System.Drawing.Size(384, 55);
        self.panel1.TabIndex := 0;
        // 
        // pictureBox2
        // 
        self.pictureBox2.BackColor := System.Drawing.Color.Transparent;
        self.pictureBox2.BorderStyle := System.Windows.Forms.BorderStyle.FixedSingle;
        self.pictureBox2.Image := (System.Drawing.Image(resources.GetObject('pictureBox2.Image')));
        self.pictureBox2.Location := new System.Drawing.Point(3, 3);
        self.pictureBox2.Name := 'pictureBox2';
        self.pictureBox2.Size := new System.Drawing.Size(49, 49);
        self.pictureBox2.SizeMode := System.Windows.Forms.PictureBoxSizeMode.StretchImage;
        self.pictureBox2.TabIndex := 3;
        self.pictureBox2.TabStop := false;
        self.pictureBox2.Visible := false;
        // 
        // pictureBox1
        // 
        self.pictureBox1.BackColor := System.Drawing.Color.Transparent;
        self.pictureBox1.BorderStyle := System.Windows.Forms.BorderStyle.FixedSingle;
        self.pictureBox1.Image := (System.Drawing.Image(resources.GetObject('pictureBox1.Image')));
        self.pictureBox1.Location := new System.Drawing.Point(3, 3);
        self.pictureBox1.Name := 'pictureBox1';
        self.pictureBox1.Size := new System.Drawing.Size(49, 49);
        self.pictureBox1.SizeMode := System.Windows.Forms.PictureBoxSizeMode.StretchImage;
        self.pictureBox1.TabIndex := 2;
        self.pictureBox1.TabStop := false;
        // 
        // label1
        // 
        self.label1.BackColor := System.Drawing.Color.Transparent;
        self.label1.Font := new System.Drawing.Font('Segoe UI', 11.25, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.label1.ForeColor := System.Drawing.Color.White;
        self.label1.Location := new System.Drawing.Point(58, 3);
        self.label1.Name := 'label1';
        self.label1.Size := new System.Drawing.Size(314, 49);
        self.label1.TabIndex := 0;
        self.label1.Text := 'Michael Agarkov';
        self.label1.TextAlign := System.Drawing.ContentAlignment.MiddleLeft;
        // 
        // treeView1
        // 
        self.treeView1.Dock := System.Windows.Forms.DockStyle.Left;
        self.treeView1.Location := new System.Drawing.Point(0, 55);
        self.treeView1.Name := 'treeView1';
        treeNode11.Name := 'Узел0';
        treeNode11.Text := 'Michael Agarkov';
        treeNode12.Name := 'Узел1';
        treeNode12.Text := 'Maksim Chernyshkov';
        self.treeView1.Nodes.AddRange(new System.Windows.Forms.TreeNode[2](treeNode11, treeNode12));
        self.treeView1.Size := new System.Drawing.Size(137, 246);
        self.treeView1.TabIndex := 1;
        self.treeView1.AfterSelect += treeView1_AfterSelect;
        // 
        // panel2
        // 
        self.panel2.BackgroundImage := (System.Drawing.Image(resources.GetObject('panel2.BackgroundImage')));
        self.panel2.BackgroundImageLayout := System.Windows.Forms.ImageLayout.Stretch;
        self.panel2.Controls.Add(self.button1);
        self.panel2.Dock := System.Windows.Forms.DockStyle.Bottom;
        self.panel2.Location := new System.Drawing.Point(137, 272);
        self.panel2.Name := 'panel2';
        self.panel2.Size := new System.Drawing.Size(247, 29);
        self.panel2.TabIndex := 2;
        // 
        // button1
        // 
        self.button1.Location := new System.Drawing.Point(169, 3);
        self.button1.Name := 'button1';
        self.button1.Size := new System.Drawing.Size(75, 23);
        self.button1.TabIndex := 0;
        self.button1.Text := 'OK';
        self.button1.UseVisualStyleBackColor := true;
        self.button1.Click += button1_Click;
        // 
        // panel3
        // 
        self.panel3.Controls.Add(self.linkLabel3);
        self.panel3.Controls.Add(self.label2);
        self.panel3.Dock := System.Windows.Forms.DockStyle.Fill;
        self.panel3.Location := new System.Drawing.Point(137, 55);
        self.panel3.Name := 'panel3';
        self.panel3.Size := new System.Drawing.Size(247, 217);
        self.panel3.TabIndex := 3;
        // 
        // linkLabel3
        // 
        self.linkLabel3.Font := new System.Drawing.Font('Segoe UI', 8.25, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.linkLabel3.LinkArea := new System.Windows.Forms.LinkArea(18, 6);
        self.linkLabel3.Location := new System.Drawing.Point(6, 199);
        self.linkLabel3.Name := 'linkLabel3';
        self.linkLabel3.Size := new System.Drawing.Size(229, 15);
        self.linkLabel3.TabIndex := 3;
        self.linkLabel3.TabStop := true;
        self.linkLabel3.Text := 'Michael Agarkov''s GitHub';
        self.linkLabel3.UseCompatibleTextRendering := true;
        self.linkLabel3.LinkClicked += linkLabel3_LinkClicked;
        // 
        // label2
        // 
        self.label2.Location := new System.Drawing.Point(6, 6);
        self.label2.Name := 'label2';
        self.label2.Size := new System.Drawing.Size(238, 100);
        self.label2.TabIndex := 0;
        self.label2.Text := '• Original creator of this project'#13#10'• Creator and graphic designer of this launcher'#13#10'• Created MicChat classic and Revived v1.1 entirely himself';
        // 
        // panel4
        // 
        self.panel4.Controls.Add(self.linkLabel4);
        self.panel4.Controls.Add(self.label3);
        self.panel4.Dock := System.Windows.Forms.DockStyle.Fill;
        self.panel4.Location := new System.Drawing.Point(137, 55);
        self.panel4.Name := 'panel4';
        self.panel4.Size := new System.Drawing.Size(247, 217);
        self.panel4.TabIndex := 4;
        self.panel4.Visible := false;
        // 
        // linkLabel4
        // 
        self.linkLabel4.Font := new System.Drawing.Font('Segoe UI', 8.25, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.linkLabel4.LinkArea := new System.Windows.Forms.LinkArea(21, 6);
        self.linkLabel4.Location := new System.Drawing.Point(6, 199);
        self.linkLabel4.Name := 'linkLabel4';
        self.linkLabel4.Size := new System.Drawing.Size(229, 15);
        self.linkLabel4.TabIndex := 3;
        self.linkLabel4.TabStop := true;
        self.linkLabel4.Text := 'Maksim Chernyshkov''s GitHub';
        self.linkLabel4.UseCompatibleTextRendering := true;
        self.linkLabel4.LinkClicked += linkLabel4_LinkClicked;
        // 
        // label3
        // 
        self.label3.Location := new System.Drawing.Point(6, 6);
        self.label3.Name := 'label3';
        self.label3.Size := new System.Drawing.Size(238, 81);
        self.label3.TabIndex := 0;
        self.label3.Text := '• Joined in version 1.2'#13#10'• Gives lots of good ideas'#13#10'• Made enhancements to the client in 1.2';
        // 
        // ContribForm
        // 
        self.ClientSize := new System.Drawing.Size(384, 301);
        self.Controls.Add(self.panel4);
        self.Controls.Add(self.panel3);
        self.Controls.Add(self.panel2);
        self.Controls.Add(self.treeView1);
        self.Controls.Add(self.panel1);
        self.FormBorderStyle := System.Windows.Forms.FormBorderStyle.FixedSingle;
        self.Icon := (System.Drawing.Icon(resources.GetObject('$this.Icon')));
        self.MaximizeBox := false;
        self.MinimizeBox := false;
        self.Name := 'ContribForm';
        self.StartPosition := System.Windows.Forms.FormStartPosition.CenterScreen;
        self.Text := 'MicChat Contributors';
        self.Load += ContribForm_Load;
        self.panel1.ResumeLayout(false);
        (System.ComponentModel.ISupportInitialize(self.pictureBox2)).EndInit();
        (System.ComponentModel.ISupportInitialize(self.pictureBox1)).EndInit();
        self.panel2.ResumeLayout(false);
        self.panel3.ResumeLayout(false);
        self.panel4.ResumeLayout(false);
        self.ResumeLayout(false);
    end;
