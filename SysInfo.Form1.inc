procedure InitializeComponent;
    begin
        var resources: System.ComponentModel.ComponentResourceManager := new System.ComponentModel.ComponentResourceManager(typeof(Form1));
        self.groupBox1 := new System.Windows.Forms.GroupBox();
        self.label1 := new System.Windows.Forms.Label();
        self.groupBox1.SuspendLayout();
        self.SuspendLayout();
        // 
        // groupBox1
        // 
        self.groupBox1.Controls.Add(self.label1);
        self.groupBox1.Location := new System.Drawing.Point(12, 12);
        self.groupBox1.Name := 'groupBox1';
        self.groupBox1.Size := new System.Drawing.Size(260, 100);
        self.groupBox1.TabIndex := 0;
        self.groupBox1.TabStop := false;
        self.groupBox1.Text := 'OS';
        // 
        // label1
        // 
        self.label1.Location := new System.Drawing.Point(6, 16);
        self.label1.Name := 'label1';
        self.label1.Size := new System.Drawing.Size(248, 13);
        self.label1.TabIndex := 0;
        self.label1.Text := 'OS';
        // 
        // Form1
        // 
        self.ClientSize := new System.Drawing.Size(284, 261);
        self.Controls.Add(self.groupBox1);
        self.FormBorderStyle := System.Windows.Forms.FormBorderStyle.FixedSingle;
        self.Icon := (System.Drawing.Icon(resources.GetObject('$this.Icon')));
        self.MaximizeBox := false;
        self.MinimizeBox := false;
        self.Name := 'Form1';
        self.StartPosition := System.Windows.Forms.FormStartPosition.CenterScreen;
        self.Text := 'System Information';
        self.Load += Form1_Load;
        self.groupBox1.ResumeLayout(false);
        self.ResumeLayout(false);
    end;
