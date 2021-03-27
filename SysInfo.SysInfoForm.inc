procedure InitializeComponent;
    begin
        var resources: System.ComponentModel.ComponentResourceManager := new System.ComponentModel.ComponentResourceManager(typeof(SysInfoForm));
        self.groupBox1 := new System.Windows.Forms.GroupBox();
        self.label5 := new System.Windows.Forms.Label();
        self.label4 := new System.Windows.Forms.Label();
        self.label3 := new System.Windows.Forms.Label();
        self.label2 := new System.Windows.Forms.Label();
        self.label1 := new System.Windows.Forms.Label();
        self.groupBox2 := new System.Windows.Forms.GroupBox();
        self.label6 := new System.Windows.Forms.Label();
        self.groupBox3 := new System.Windows.Forms.GroupBox();
        self.label10 := new System.Windows.Forms.Label();
        self.label9 := new System.Windows.Forms.Label();
        self.label8 := new System.Windows.Forms.Label();
        self.label7 := new System.Windows.Forms.Label();
        self.button1 := new System.Windows.Forms.Button();
        self.button2 := new System.Windows.Forms.Button();
        self.groupBox1.SuspendLayout();
        self.groupBox2.SuspendLayout();
        self.groupBox3.SuspendLayout();
        self.SuspendLayout();
        // 
        // groupBox1
        // 
        self.groupBox1.BackColor := System.Drawing.Color.Transparent;
        self.groupBox1.Controls.Add(self.label5);
        self.groupBox1.Controls.Add(self.label4);
        self.groupBox1.Controls.Add(self.label3);
        self.groupBox1.Controls.Add(self.label2);
        self.groupBox1.Controls.Add(self.label1);
        self.groupBox1.ForeColor := System.Drawing.Color.White;
        self.groupBox1.Location := new System.Drawing.Point(12, 12);
        self.groupBox1.Name := 'groupBox1';
        self.groupBox1.Size := new System.Drawing.Size(260, 90);
        self.groupBox1.TabIndex := 0;
        self.groupBox1.TabStop := false;
        self.groupBox1.Text := 'OS';
        // 
        // label5
        // 
        self.label5.Location := new System.Drawing.Point(6, 68);
        self.label5.Name := 'label5';
        self.label5.Size := new System.Drawing.Size(248, 13);
        self.label5.TabIndex := 4;
        self.label5.Text := 'OS Directory';
        // 
        // label4
        // 
        self.label4.Location := new System.Drawing.Point(6, 55);
        self.label4.Name := 'label4';
        self.label4.Size := new System.Drawing.Size(248, 13);
        self.label4.TabIndex := 3;
        self.label4.Text := '64-bit';
        // 
        // label3
        // 
        self.label3.Location := new System.Drawing.Point(6, 42);
        self.label3.Name := 'label3';
        self.label3.Size := new System.Drawing.Size(248, 13);
        self.label3.TabIndex := 2;
        self.label3.Text := 'Processor Count';
        // 
        // label2
        // 
        self.label2.Location := new System.Drawing.Point(6, 29);
        self.label2.Name := 'label2';
        self.label2.Size := new System.Drawing.Size(248, 13);
        self.label2.TabIndex := 1;
        self.label2.Text := 'Machine Name';
        // 
        // label1
        // 
        self.label1.Location := new System.Drawing.Point(6, 16);
        self.label1.Name := 'label1';
        self.label1.Size := new System.Drawing.Size(248, 13);
        self.label1.TabIndex := 0;
        self.label1.Text := 'OS';
        // 
        // groupBox2
        // 
        self.groupBox2.BackColor := System.Drawing.Color.Transparent;
        self.groupBox2.Controls.Add(self.label6);
        self.groupBox2.ForeColor := System.Drawing.Color.White;
        self.groupBox2.Location := new System.Drawing.Point(12, 108);
        self.groupBox2.Name := 'groupBox2';
        self.groupBox2.Size := new System.Drawing.Size(260, 38);
        self.groupBox2.TabIndex := 1;
        self.groupBox2.TabStop := false;
        self.groupBox2.Text := 'User';
        // 
        // label6
        // 
        self.label6.Location := new System.Drawing.Point(6, 16);
        self.label6.Name := 'label6';
        self.label6.Size := new System.Drawing.Size(248, 13);
        self.label6.TabIndex := 5;
        self.label6.Text := 'Username';
        // 
        // groupBox3
        // 
        self.groupBox3.BackColor := System.Drawing.Color.Transparent;
        self.groupBox3.Controls.Add(self.label10);
        self.groupBox3.Controls.Add(self.label9);
        self.groupBox3.Controls.Add(self.label8);
        self.groupBox3.Controls.Add(self.label7);
        self.groupBox3.ForeColor := System.Drawing.Color.White;
        self.groupBox3.Location := new System.Drawing.Point(12, 152);
        self.groupBox3.Name := 'groupBox3';
        self.groupBox3.Size := new System.Drawing.Size(260, 77);
        self.groupBox3.TabIndex := 2;
        self.groupBox3.TabStop := false;
        self.groupBox3.Text := 'Advanced';
        // 
        // label10
        // 
        self.label10.Location := new System.Drawing.Point(6, 55);
        self.label10.Name := 'label10';
        self.label10.Size := new System.Drawing.Size(248, 13);
        self.label10.TabIndex := 9;
        self.label10.Text := 'Shutdown Started';
        // 
        // label9
        // 
        self.label9.Location := new System.Drawing.Point(6, 42);
        self.label9.Name := 'label9';
        self.label9.Size := new System.Drawing.Size(248, 13);
        self.label9.TabIndex := 8;
        self.label9.Text := 'System Page Size';
        // 
        // label8
        // 
        self.label8.Location := new System.Drawing.Point(6, 29);
        self.label8.Name := 'label8';
        self.label8.Size := new System.Drawing.Size(248, 13);
        self.label8.TabIndex := 7;
        self.label8.Text := 'Working Set';
        // 
        // label7
        // 
        self.label7.Location := new System.Drawing.Point(6, 16);
        self.label7.Name := 'label7';
        self.label7.Size := new System.Drawing.Size(248, 13);
        self.label7.TabIndex := 6;
        self.label7.Text := 'Tick Count';
        // 
        // button1
        // 
        self.button1.Location := new System.Drawing.Point(12, 235);
        self.button1.Name := 'button1';
        self.button1.Size := new System.Drawing.Size(75, 23);
        self.button1.TabIndex := 0;
        self.button1.Text := 'Update';
        self.button1.UseVisualStyleBackColor := true;
        self.button1.Click += button1_Click;
        // 
        // button2
        // 
        self.button2.Location := new System.Drawing.Point(197, 235);
        self.button2.Name := 'button2';
        self.button2.Size := new System.Drawing.Size(75, 23);
        self.button2.TabIndex := 1;
        self.button2.Text := 'Close';
        self.button2.UseVisualStyleBackColor := true;
        self.button2.Click += button2_Click;
        // 
        // SysInfoForm
        // 
        self.BackgroundImage := (System.Drawing.Image(resources.GetObject('$this.BackgroundImage')));
        self.BackgroundImageLayout := System.Windows.Forms.ImageLayout.Stretch;
        self.ClientSize := new System.Drawing.Size(284, 270);
        self.Controls.Add(self.button2);
        self.Controls.Add(self.button1);
        self.Controls.Add(self.groupBox3);
        self.Controls.Add(self.groupBox2);
        self.Controls.Add(self.groupBox1);
        self.DoubleBuffered := true;
        self.FormBorderStyle := System.Windows.Forms.FormBorderStyle.FixedSingle;
        self.Icon := (System.Drawing.Icon(resources.GetObject('$this.Icon')));
        self.MaximizeBox := false;
        self.MinimizeBox := false;
        self.Name := 'SysInfoForm';
        self.Opacity := 0.9;
        self.StartPosition := System.Windows.Forms.FormStartPosition.CenterScreen;
        self.Text := 'System Information';
        self.Load += Form1_Load;
        self.groupBox1.ResumeLayout(false);
        self.groupBox2.ResumeLayout(false);
        self.groupBox3.ResumeLayout(false);
        self.ResumeLayout(false);
    end;
