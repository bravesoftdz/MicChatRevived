procedure InitializeComponent;
    begin
        var resources: System.ComponentModel.ComponentResourceManager := new System.ComponentModel.ComponentResourceManager(typeof(UTLS));
        self.button1 := new System.Windows.Forms.Button();
        self.label1 := new System.Windows.Forms.Label();
        self.pictureBox1 := new System.Windows.Forms.PictureBox();
        (System.ComponentModel.ISupportInitialize(self.pictureBox1)).BeginInit();
        self.SuspendLayout();
        // 
        // button1
        // 
        self.button1.Location := new System.Drawing.Point(105, 105);
        self.button1.Name := 'button1';
        self.button1.Size := new System.Drawing.Size(75, 23);
        self.button1.TabIndex := 8;
        self.button1.Text := 'OK';
        self.button1.UseVisualStyleBackColor := true;
        self.button1.Click += button1_Click;
        // 
        // label1
        // 
        self.label1.Font := new System.Drawing.Font('Segoe UI', 11.25);
        self.label1.ForeColor := System.Drawing.Color.FromArgb((System.Int32((System.Byte(0)))), (System.Int32((System.Byte(51)))), (System.Int32((System.Byte(153)))));
        self.label1.Location := new System.Drawing.Point(50, 12);
        self.label1.Name := 'label1';
        self.label1.Size := new System.Drawing.Size(222, 80);
        self.label1.TabIndex := 7;
        self.label1.Text := 'An error occured while launching the server. Try restarting MicChat. If the error still appears, try reinstalling it';
        // 
        // pictureBox1
        // 
        self.pictureBox1.Image := (System.Drawing.Image(resources.GetObject('pictureBox1.Image')));
        self.pictureBox1.Location := new System.Drawing.Point(12, 12);
        self.pictureBox1.Name := 'pictureBox1';
        self.pictureBox1.Size := new System.Drawing.Size(32, 32);
        self.pictureBox1.SizeMode := System.Windows.Forms.PictureBoxSizeMode.StretchImage;
        self.pictureBox1.TabIndex := 6;
        self.pictureBox1.TabStop := false;
        // 
        // UTLS
        // 
        self.ClientSize := new System.Drawing.Size(284, 140);
        self.Controls.Add(self.button1);
        self.Controls.Add(self.label1);
        self.Controls.Add(self.pictureBox1);
        self.FormBorderStyle := System.Windows.Forms.FormBorderStyle.FixedSingle;
        self.Icon := (System.Drawing.Icon(resources.GetObject('$this.Icon')));
        self.MaximizeBox := false;
        self.MinimizeBox := false;
        self.Name := 'UTLS';
        self.StartPosition := System.Windows.Forms.FormStartPosition.CenterScreen;
        self.Text := 'Unable to launch server';
        (System.ComponentModel.ISupportInitialize(self.pictureBox1)).EndInit();
        self.ResumeLayout(false);
    end;
