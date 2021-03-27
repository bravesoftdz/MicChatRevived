procedure InitializeComponent;
    begin
        self.components := new System.ComponentModel.Container();
        var resources: System.ComponentModel.ComponentResourceManager := new System.ComponentModel.ComponentResourceManager(typeof(SettingsForm));
        var treeNode11: System.Windows.Forms.TreeNode := new System.Windows.Forms.TreeNode('General');
        var treeNode12: System.Windows.Forms.TreeNode := new System.Windows.Forms.TreeNode('Advanced');
        self.panel1 := new System.Windows.Forms.Panel();
        self.treeView1 := new System.Windows.Forms.TreeView();
        self.panel2 := new System.Windows.Forms.Panel();
        self.button1 := new System.Windows.Forms.Button();
        self.button2 := new System.Windows.Forms.Button();
        self.button3 := new System.Windows.Forms.Button();
        self.panel3 := new System.Windows.Forms.Panel();
        self.pictureBox1 := new System.Windows.Forms.PictureBox();
        self.label1 := new System.Windows.Forms.Label();
        self.label2 := new System.Windows.Forms.Label();
        self.imageList1 := new System.Windows.Forms.ImageList(self.components);
        self.pictureBox2 := new System.Windows.Forms.PictureBox();
        self.panel4 := new System.Windows.Forms.Panel();
        self.button4 := new System.Windows.Forms.Button();
        self.button5 := new System.Windows.Forms.Button();
        self.checkBox1 := new System.Windows.Forms.CheckBox();
        self.checkBox2 := new System.Windows.Forms.CheckBox();
        self.checkBox3 := new System.Windows.Forms.CheckBox();
        self.panel1.SuspendLayout();
        self.panel2.SuspendLayout();
        self.panel3.SuspendLayout();
        (System.ComponentModel.ISupportInitialize(self.pictureBox1)).BeginInit();
        (System.ComponentModel.ISupportInitialize(self.pictureBox2)).BeginInit();
        self.panel4.SuspendLayout();
        self.SuspendLayout();
        // 
        // panel1
        // 
        self.panel1.BackgroundImage := (System.Drawing.Image(resources.GetObject('panel1.BackgroundImage')));
        self.panel1.BackgroundImageLayout := System.Windows.Forms.ImageLayout.Stretch;
        self.panel1.Controls.Add(self.pictureBox2);
        self.panel1.Controls.Add(self.label2);
        self.panel1.Controls.Add(self.label1);
        self.panel1.Controls.Add(self.pictureBox1);
        self.panel1.Dock := System.Windows.Forms.DockStyle.Top;
        self.panel1.Location := new System.Drawing.Point(0, 0);
        self.panel1.Name := 'panel1';
        self.panel1.Size := new System.Drawing.Size(364, 60);
        self.panel1.TabIndex := 0;
        // 
        // treeView1
        // 
        self.treeView1.Dock := System.Windows.Forms.DockStyle.Left;
        self.treeView1.ImageIndex := 0;
        self.treeView1.ImageList := self.imageList1;
        self.treeView1.Location := new System.Drawing.Point(0, 60);
        self.treeView1.Name := 'treeView1';
        treeNode11.ImageKey := 'General';
        treeNode11.Name := 'Узел0';
        treeNode11.SelectedImageKey := 'General';
        treeNode11.Text := 'General';
        treeNode12.ImageKey := 'Advanced';
        treeNode12.Name := 'Узел1';
        treeNode12.SelectedImageKey := 'Advanced';
        treeNode12.Text := 'Advanced';
        self.treeView1.Nodes.AddRange(new System.Windows.Forms.TreeNode[2](treeNode11, treeNode12));
        self.treeView1.SelectedImageIndex := 0;
        self.treeView1.Size := new System.Drawing.Size(110, 221);
        self.treeView1.TabIndex := 1;
        self.treeView1.AfterSelect += treeView1_AfterSelect;
        // 
        // panel2
        // 
        self.panel2.BackgroundImage := (System.Drawing.Image(resources.GetObject('panel2.BackgroundImage')));
        self.panel2.BackgroundImageLayout := System.Windows.Forms.ImageLayout.Stretch;
        self.panel2.Controls.Add(self.button3);
        self.panel2.Controls.Add(self.button2);
        self.panel2.Controls.Add(self.button1);
        self.panel2.Dock := System.Windows.Forms.DockStyle.Bottom;
        self.panel2.Location := new System.Drawing.Point(110, 252);
        self.panel2.Name := 'panel2';
        self.panel2.Size := new System.Drawing.Size(254, 29);
        self.panel2.TabIndex := 2;
        // 
        // button1
        // 
        self.button1.Location := new System.Drawing.Point(176, 3);
        self.button1.Name := 'button1';
        self.button1.Size := new System.Drawing.Size(75, 23);
        self.button1.TabIndex := 0;
        self.button1.Text := 'OK';
        self.button1.UseVisualStyleBackColor := true;
        self.button1.Click += button1_Click;
        // 
        // button2
        // 
        self.button2.Location := new System.Drawing.Point(95, 3);
        self.button2.Name := 'button2';
        self.button2.Size := new System.Drawing.Size(75, 23);
        self.button2.TabIndex := 3;
        self.button2.Text := 'Apply';
        self.button2.UseVisualStyleBackColor := true;
        self.button2.Click += button2_Click;
        // 
        // button3
        // 
        self.button3.Location := new System.Drawing.Point(6, 3);
        self.button3.Name := 'button3';
        self.button3.Size := new System.Drawing.Size(75, 23);
        self.button3.TabIndex := 4;
        self.button3.Text := 'Cancel';
        self.button3.UseVisualStyleBackColor := true;
        self.button3.Click += button3_Click;
        // 
        // panel3
        // 
        self.panel3.Controls.Add(self.checkBox2);
        self.panel3.Controls.Add(self.checkBox1);
        self.panel3.Controls.Add(self.button4);
        self.panel3.Dock := System.Windows.Forms.DockStyle.Fill;
        self.panel3.Location := new System.Drawing.Point(110, 60);
        self.panel3.Name := 'panel3';
        self.panel3.Size := new System.Drawing.Size(254, 192);
        self.panel3.TabIndex := 3;
        // 
        // pictureBox1
        // 
        self.pictureBox1.BackColor := System.Drawing.Color.Transparent;
        self.pictureBox1.Image := (System.Drawing.Image(resources.GetObject('pictureBox1.Image')));
        self.pictureBox1.Location := new System.Drawing.Point(3, 3);
        self.pictureBox1.Name := 'pictureBox1';
        self.pictureBox1.Size := new System.Drawing.Size(54, 54);
        self.pictureBox1.SizeMode := System.Windows.Forms.PictureBoxSizeMode.StretchImage;
        self.pictureBox1.TabIndex := 0;
        self.pictureBox1.TabStop := false;
        // 
        // label1
        // 
        self.label1.BackColor := System.Drawing.Color.Transparent;
        self.label1.Font := new System.Drawing.Font('Segoe UI', 9.75, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.label1.ForeColor := System.Drawing.Color.White;
        self.label1.Location := new System.Drawing.Point(116, 9);
        self.label1.Name := 'label1';
        self.label1.Size := new System.Drawing.Size(236, 18);
        self.label1.TabIndex := 1;
        self.label1.Text := 'General';
        // 
        // label2
        // 
        self.label2.BackColor := System.Drawing.Color.Transparent;
        self.label2.ForeColor := System.Drawing.Color.White;
        self.label2.Location := new System.Drawing.Point(134, 30);
        self.label2.Name := 'label2';
        self.label2.Size := new System.Drawing.Size(218, 27);
        self.label2.TabIndex := 2;
        self.label2.Text := 'The general settings for the program';
        // 
        // imageList1
        // 
        self.imageList1.ImageStream := (System.Windows.Forms.ImageListStreamer(resources.GetObject('imageList1.ImageStream')));
        self.imageList1.TransparentColor := System.Drawing.Color.Transparent;
        self.imageList1.Images.SetKeyName(0, 'General');
        self.imageList1.Images.SetKeyName(1, 'Advanced');
        // 
        // pictureBox2
        // 
        self.pictureBox2.BackColor := System.Drawing.Color.Transparent;
        self.pictureBox2.Image := (System.Drawing.Image(resources.GetObject('pictureBox2.Image')));
        self.pictureBox2.Location := new System.Drawing.Point(3, 3);
        self.pictureBox2.Name := 'pictureBox2';
        self.pictureBox2.Size := new System.Drawing.Size(54, 54);
        self.pictureBox2.SizeMode := System.Windows.Forms.PictureBoxSizeMode.StretchImage;
        self.pictureBox2.TabIndex := 3;
        self.pictureBox2.TabStop := false;
        self.pictureBox2.Visible := false;
        // 
        // panel4
        // 
        self.panel4.Controls.Add(self.checkBox3);
        self.panel4.Controls.Add(self.button5);
        self.panel4.Dock := System.Windows.Forms.DockStyle.Fill;
        self.panel4.Location := new System.Drawing.Point(110, 60);
        self.panel4.Name := 'panel4';
        self.panel4.Size := new System.Drawing.Size(254, 192);
        self.panel4.TabIndex := 4;
        // 
        // button4
        // 
        self.button4.Location := new System.Drawing.Point(176, 166);
        self.button4.Name := 'button4';
        self.button4.Size := new System.Drawing.Size(75, 23);
        self.button4.TabIndex := 0;
        self.button4.Text := 'Set default';
        self.button4.UseVisualStyleBackColor := true;
        self.button4.Click += button4_Click;
        // 
        // button5
        // 
        self.button5.Location := new System.Drawing.Point(176, 166);
        self.button5.Name := 'button5';
        self.button5.Size := new System.Drawing.Size(75, 23);
        self.button5.TabIndex := 1;
        self.button5.Text := 'Set default';
        self.button5.UseVisualStyleBackColor := true;
        self.button5.Click += button5_Click;
        // 
        // checkBox1
        // 
        self.checkBox1.Location := new System.Drawing.Point(6, 6);
        self.checkBox1.Name := 'checkBox1';
        self.checkBox1.Size := new System.Drawing.Size(236, 24);
        self.checkBox1.TabIndex := 1;
        self.checkBox1.Text := 'Show Splash screen at start';
        self.checkBox1.UseVisualStyleBackColor := true;
        // 
        // checkBox2
        // 
        self.checkBox2.Location := new System.Drawing.Point(6, 36);
        self.checkBox2.Name := 'checkBox2';
        self.checkBox2.Size := new System.Drawing.Size(236, 24);
        self.checkBox2.TabIndex := 2;
        self.checkBox2.Text := 'Hide in tray at start';
        self.checkBox2.UseVisualStyleBackColor := true;
        // 
        // checkBox3
        // 
        self.checkBox3.Location := new System.Drawing.Point(6, 6);
        self.checkBox3.Name := 'checkBox3';
        self.checkBox3.Size := new System.Drawing.Size(236, 24);
        self.checkBox3.TabIndex := 2;
        self.checkBox3.Text := 'Add to autorun';
        self.checkBox3.UseVisualStyleBackColor := true;
        // 
        // SettingsForm
        // 
        self.ClientSize := new System.Drawing.Size(364, 281);
        self.Controls.Add(self.panel4);
        self.Controls.Add(self.panel3);
        self.Controls.Add(self.panel2);
        self.Controls.Add(self.treeView1);
        self.Controls.Add(self.panel1);
        self.FormBorderStyle := System.Windows.Forms.FormBorderStyle.FixedSingle;
        self.Icon := (System.Drawing.Icon(resources.GetObject('$this.Icon')));
        self.MaximizeBox := false;
        self.Name := 'SettingsForm';
        self.StartPosition := System.Windows.Forms.FormStartPosition.CenterScreen;
        self.Text := 'MicChat Settings';
        self.Load += SettingsForm_Load;
        self.panel1.ResumeLayout(false);
        self.panel2.ResumeLayout(false);
        self.panel3.ResumeLayout(false);
        (System.ComponentModel.ISupportInitialize(self.pictureBox1)).EndInit();
        (System.ComponentModel.ISupportInitialize(self.pictureBox2)).EndInit();
        self.panel4.ResumeLayout(false);
        self.ResumeLayout(false);
    end;
