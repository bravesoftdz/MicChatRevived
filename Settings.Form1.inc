procedure InitializeComponent;
    begin
        var resources: System.ComponentModel.ComponentResourceManager := new System.ComponentModel.ComponentResourceManager(typeof(Form1));
        self.panel1 := new System.Windows.Forms.Panel();
        self.treeView1 := new System.Windows.Forms.TreeView();
        self.panel2 := new System.Windows.Forms.Panel();
        self.button1 := new System.Windows.Forms.Button();
        self.button2 := new System.Windows.Forms.Button();
        self.button3 := new System.Windows.Forms.Button();
        self.panel3 := new System.Windows.Forms.Panel();
        self.panel2.SuspendLayout();
        self.SuspendLayout();
        // 
        // panel1
        // 
        self.panel1.BackgroundImage := (System.Drawing.Image(resources.GetObject('panel1.BackgroundImage')));
        self.panel1.BackgroundImageLayout := System.Windows.Forms.ImageLayout.Stretch;
        self.panel1.Dock := System.Windows.Forms.DockStyle.Top;
        self.panel1.Location := new System.Drawing.Point(0, 0);
        self.panel1.Name := 'panel1';
        self.panel1.Size := new System.Drawing.Size(364, 60);
        self.panel1.TabIndex := 0;
        // 
        // treeView1
        // 
        self.treeView1.Dock := System.Windows.Forms.DockStyle.Left;
        self.treeView1.Location := new System.Drawing.Point(0, 60);
        self.treeView1.Name := 'treeView1';
        self.treeView1.Size := new System.Drawing.Size(110, 221);
        self.treeView1.TabIndex := 1;
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
        // 
        // button2
        // 
        self.button2.Location := new System.Drawing.Point(95, 3);
        self.button2.Name := 'button2';
        self.button2.Size := new System.Drawing.Size(75, 23);
        self.button2.TabIndex := 3;
        self.button2.Text := 'Apply';
        self.button2.UseVisualStyleBackColor := true;
        // 
        // button3
        // 
        self.button3.Location := new System.Drawing.Point(6, 3);
        self.button3.Name := 'button3';
        self.button3.Size := new System.Drawing.Size(75, 23);
        self.button3.TabIndex := 4;
        self.button3.Text := 'Cancel';
        self.button3.UseVisualStyleBackColor := true;
        // 
        // panel3
        // 
        self.panel3.Dock := System.Windows.Forms.DockStyle.Fill;
        self.panel3.Location := new System.Drawing.Point(110, 60);
        self.panel3.Name := 'panel3';
        self.panel3.Size := new System.Drawing.Size(254, 192);
        self.panel3.TabIndex := 3;
        // 
        // Form1
        // 
        self.ClientSize := new System.Drawing.Size(364, 281);
        self.Controls.Add(self.panel3);
        self.Controls.Add(self.panel2);
        self.Controls.Add(self.treeView1);
        self.Controls.Add(self.panel1);
        self.FormBorderStyle := System.Windows.Forms.FormBorderStyle.FixedSingle;
        self.Icon := (System.Drawing.Icon(resources.GetObject('$this.Icon')));
        self.MaximizeBox := false;
        self.Name := 'Form1';
        self.StartPosition := System.Windows.Forms.FormStartPosition.CenterScreen;
        self.Text := 'MicChat Settings';
        self.panel2.ResumeLayout(false);
        self.ResumeLayout(false);
    end;
