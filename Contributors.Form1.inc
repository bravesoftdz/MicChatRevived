procedure InitializeComponent;
    begin
        var resources: System.ComponentModel.ComponentResourceManager := new System.ComponentModel.ComponentResourceManager(typeof(Form1));
        self.groupBox1 := new System.Windows.Forms.GroupBox();
        self.linkLabel1 := new System.Windows.Forms.LinkLabel();
        self.linkLabel2 := new System.Windows.Forms.LinkLabel();
        self.groupBox1.SuspendLayout();
        self.SuspendLayout();
        // 
        // groupBox1
        // 
        self.groupBox1.Controls.Add(self.linkLabel2);
        self.groupBox1.Controls.Add(self.linkLabel1);
        self.groupBox1.Location := new System.Drawing.Point(12, 12);
        self.groupBox1.Name := 'groupBox1';
        self.groupBox1.Size := new System.Drawing.Size(320, 52);
        self.groupBox1.TabIndex := 0;
        self.groupBox1.TabStop := false;
        self.groupBox1.Text := 'Project';
        // 
        // linkLabel1
        // 
        self.linkLabel1.LinkArea := new System.Windows.Forms.LinkArea(22, 15);
        self.linkLabel1.Location := new System.Drawing.Point(6, 16);
        self.linkLabel1.Name := 'linkLabel1';
        self.linkLabel1.Size := new System.Drawing.Size(194, 14);
        self.linkLabel1.TabIndex := 0;
        self.linkLabel1.TabStop := true;
        self.linkLabel1.Text := 'Originally created by Michael Agarkov';
        self.linkLabel1.UseCompatibleTextRendering := true;
        self.linkLabel1.LinkClicked += linkLabel1_LinkClicked;
        // 
        // linkLabel2
        // 
        self.linkLabel2.LinkArea := new System.Windows.Forms.LinkArea(0, 18);
        self.linkLabel2.Location := new System.Drawing.Point(6, 32);
        self.linkLabel2.Name := 'linkLabel2';
        self.linkLabel2.Size := new System.Drawing.Size(308, 14);
        self.linkLabel2.TabIndex := 1;
        self.linkLabel2.TabStop := true;
        self.linkLabel2.Text := 'Maksim Chernyshkov joined in version 1.2';
        self.linkLabel2.UseCompatibleTextRendering := true;
        self.linkLabel2.LinkClicked += linkLabel2_LinkClicked;
        // 
        // Form1
        // 
        self.ClientSize := new System.Drawing.Size(344, 281);
        self.Controls.Add(self.groupBox1);
        self.Icon := (System.Drawing.Icon(resources.GetObject('$this.Icon')));
        self.MaximizeBox := false;
        self.MinimizeBox := false;
        self.Name := 'Form1';
        self.StartPosition := System.Windows.Forms.FormStartPosition.CenterScreen;
        self.Text := 'MicChat contributors';
        self.groupBox1.ResumeLayout(false);
        self.ResumeLayout(false);
    end;
