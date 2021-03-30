procedure InitializeComponent;
    begin
        self.components := new System.ComponentModel.Container();
        var resources: System.ComponentModel.ComponentResourceManager := new System.ComponentModel.ComponentResourceManager(typeof(Form1));
        self.menuStrip1 := new System.Windows.Forms.MenuStrip();
        self.micChatToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.openTheClientToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.hostAServerToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.toolStripSeparator1 := new System.Windows.Forms.ToolStripSeparator();
        self.settingsToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.toolStripSeparator2 := new System.Windows.Forms.ToolStripSeparator();
        self.showSystemInfoToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.aboutToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.panel1 := new System.Windows.Forms.Panel();
        self.groupBox1 := new System.Windows.Forms.GroupBox();
        self.linkLabel3 := new System.Windows.Forms.LinkLabel();
        self.pictureBox3 := new System.Windows.Forms.PictureBox();
        self.linkLabel1 := new System.Windows.Forms.LinkLabel();
        self.pictureBox2 := new System.Windows.Forms.PictureBox();
        self.linkLabel2 := new System.Windows.Forms.LinkLabel();
        self.pictureBox1 := new System.Windows.Forms.PictureBox();
        self.panel2 := new System.Windows.Forms.Panel();
        self.label1 := new System.Windows.Forms.Label();
        self.groupBox3 := new System.Windows.Forms.GroupBox();
        self.radioButton3 := new System.Windows.Forms.RadioButton();
        self.pictureBox6 := new System.Windows.Forms.PictureBox();
        self.button2 := new System.Windows.Forms.Button();
        self.radioButton4 := new System.Windows.Forms.RadioButton();
        self.pictureBox7 := new System.Windows.Forms.PictureBox();
        self.groupBox2 := new System.Windows.Forms.GroupBox();
        self.radioButton2 := new System.Windows.Forms.RadioButton();
        self.pictureBox5 := new System.Windows.Forms.PictureBox();
        self.button1 := new System.Windows.Forms.Button();
        self.radioButton1 := new System.Windows.Forms.RadioButton();
        self.pictureBox4 := new System.Windows.Forms.PictureBox();
        self.notifyIcon1 := new System.Windows.Forms.NotifyIcon(self.components);
        self.contextMenuStrip1 := new System.Windows.Forms.ContextMenuStrip(self.components);
        self.openTheClientToolStripMenuItem1 := new System.Windows.Forms.ToolStripMenuItem();
        self.hostAServerToolStripMenuItem1 := new System.Windows.Forms.ToolStripMenuItem();
        self.toolStripSeparator3 := new System.Windows.Forms.ToolStripSeparator();
        self.showSystemInfoToolStripMenuItem1 := new System.Windows.Forms.ToolStripMenuItem();
        self.toolStripSeparator5 := new System.Windows.Forms.ToolStripSeparator();
        self.showMicChatToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.hideMicChatToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.toolStripSeparator4 := new System.Windows.Forms.ToolStripSeparator();
        self.closeMicChatToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.menuStrip1.SuspendLayout();
        self.panel1.SuspendLayout();
        self.groupBox1.SuspendLayout();
        (System.ComponentModel.ISupportInitialize(self.pictureBox3)).BeginInit();
        (System.ComponentModel.ISupportInitialize(self.pictureBox2)).BeginInit();
        (System.ComponentModel.ISupportInitialize(self.pictureBox1)).BeginInit();
        self.panel2.SuspendLayout();
        self.groupBox3.SuspendLayout();
        (System.ComponentModel.ISupportInitialize(self.pictureBox6)).BeginInit();
        (System.ComponentModel.ISupportInitialize(self.pictureBox7)).BeginInit();
        self.groupBox2.SuspendLayout();
        (System.ComponentModel.ISupportInitialize(self.pictureBox5)).BeginInit();
        (System.ComponentModel.ISupportInitialize(self.pictureBox4)).BeginInit();
        self.contextMenuStrip1.SuspendLayout();
        self.SuspendLayout();
        // 
        // menuStrip1
        // 
        self.menuStrip1.BackgroundImage := (System.Drawing.Image(resources.GetObject('menuStrip1.BackgroundImage')));
        self.menuStrip1.BackgroundImageLayout := System.Windows.Forms.ImageLayout.Stretch;
        self.menuStrip1.Items.AddRange(new System.Windows.Forms.ToolStripItem[2](self.micChatToolStripMenuItem, self.aboutToolStripMenuItem));
        self.menuStrip1.Location := new System.Drawing.Point(0, 0);
        self.menuStrip1.Name := 'menuStrip1';
        self.menuStrip1.Size := new System.Drawing.Size(399, 24);
        self.menuStrip1.TabIndex := 0;
        self.menuStrip1.Text := 'menuStrip1';
        // 
        // micChatToolStripMenuItem
        // 
        self.micChatToolStripMenuItem.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[6](self.openTheClientToolStripMenuItem, self.hostAServerToolStripMenuItem, self.toolStripSeparator1, self.settingsToolStripMenuItem, self.toolStripSeparator2, self.showSystemInfoToolStripMenuItem));
        self.micChatToolStripMenuItem.ForeColor := System.Drawing.Color.White;
        self.micChatToolStripMenuItem.Image := (System.Drawing.Image(resources.GetObject('micChatToolStripMenuItem.Image')));
        self.micChatToolStripMenuItem.Name := 'micChatToolStripMenuItem';
        self.micChatToolStripMenuItem.Size := new System.Drawing.Size(80, 20);
        self.micChatToolStripMenuItem.Text := 'MicChat';
        // 
        // openTheClientToolStripMenuItem
        // 
        self.openTheClientToolStripMenuItem.Image := (System.Drawing.Image(resources.GetObject('openTheClientToolStripMenuItem.Image')));
        self.openTheClientToolStripMenuItem.Name := 'openTheClientToolStripMenuItem';
        self.openTheClientToolStripMenuItem.Size := new System.Drawing.Size(167, 22);
        self.openTheClientToolStripMenuItem.Text := 'Open the client';
        self.openTheClientToolStripMenuItem.Click += openTheClientToolStripMenuItem_Click;
        // 
        // hostAServerToolStripMenuItem
        // 
        self.hostAServerToolStripMenuItem.Image := (System.Drawing.Image(resources.GetObject('hostAServerToolStripMenuItem.Image')));
        self.hostAServerToolStripMenuItem.Name := 'hostAServerToolStripMenuItem';
        self.hostAServerToolStripMenuItem.Size := new System.Drawing.Size(167, 22);
        self.hostAServerToolStripMenuItem.Text := 'Host a server';
        self.hostAServerToolStripMenuItem.Click += hostAServerToolStripMenuItem_Click;
        // 
        // toolStripSeparator1
        // 
        self.toolStripSeparator1.Name := 'toolStripSeparator1';
        self.toolStripSeparator1.Size := new System.Drawing.Size(164, 6);
        // 
        // settingsToolStripMenuItem
        // 
        self.settingsToolStripMenuItem.Image := (System.Drawing.Image(resources.GetObject('settingsToolStripMenuItem.Image')));
        self.settingsToolStripMenuItem.Name := 'settingsToolStripMenuItem';
        self.settingsToolStripMenuItem.Size := new System.Drawing.Size(167, 22);
        self.settingsToolStripMenuItem.Text := 'Settings';
        self.settingsToolStripMenuItem.Click += settingsToolStripMenuItem_Click;
        // 
        // toolStripSeparator2
        // 
        self.toolStripSeparator2.Name := 'toolStripSeparator2';
        self.toolStripSeparator2.Size := new System.Drawing.Size(164, 6);
        // 
        // showSystemInfoToolStripMenuItem
        // 
        self.showSystemInfoToolStripMenuItem.Image := (System.Drawing.Image(resources.GetObject('showSystemInfoToolStripMenuItem.Image')));
        self.showSystemInfoToolStripMenuItem.Name := 'showSystemInfoToolStripMenuItem';
        self.showSystemInfoToolStripMenuItem.Size := new System.Drawing.Size(167, 22);
        self.showSystemInfoToolStripMenuItem.Text := 'Show system info';
        self.showSystemInfoToolStripMenuItem.Click += showSystemInfoToolStripMenuItem_Click;
        // 
        // aboutToolStripMenuItem
        // 
        self.aboutToolStripMenuItem.ForeColor := System.Drawing.Color.White;
        self.aboutToolStripMenuItem.Image := (System.Drawing.Image(resources.GetObject('aboutToolStripMenuItem.Image')));
        self.aboutToolStripMenuItem.Name := 'aboutToolStripMenuItem';
        self.aboutToolStripMenuItem.Size := new System.Drawing.Size(68, 20);
        self.aboutToolStripMenuItem.Text := 'About';
        self.aboutToolStripMenuItem.Click += aboutToolStripMenuItem_Click;
        // 
        // panel1
        // 
        self.panel1.BackgroundImage := (System.Drawing.Image(resources.GetObject('panel1.BackgroundImage')));
        self.panel1.BackgroundImageLayout := System.Windows.Forms.ImageLayout.Stretch;
        self.panel1.Controls.Add(self.groupBox1);
        self.panel1.Dock := System.Windows.Forms.DockStyle.Left;
        self.panel1.Location := new System.Drawing.Point(0, 24);
        self.panel1.Name := 'panel1';
        self.panel1.Size := new System.Drawing.Size(130, 267);
        self.panel1.TabIndex := 1;
        // 
        // groupBox1
        // 
        self.groupBox1.BackColor := System.Drawing.Color.Transparent;
        self.groupBox1.Controls.Add(self.linkLabel3);
        self.groupBox1.Controls.Add(self.pictureBox3);
        self.groupBox1.Controls.Add(self.linkLabel1);
        self.groupBox1.Controls.Add(self.pictureBox2);
        self.groupBox1.Controls.Add(self.linkLabel2);
        self.groupBox1.Controls.Add(self.pictureBox1);
        self.groupBox1.ForeColor := System.Drawing.Color.White;
        self.groupBox1.Location := new System.Drawing.Point(3, 82);
        self.groupBox1.Name := 'groupBox1';
        self.groupBox1.Size := new System.Drawing.Size(124, 100);
        self.groupBox1.TabIndex := 1;
        self.groupBox1.TabStop := false;
        self.groupBox1.Text := 'Actions';
        // 
        // linkLabel3
        // 
        self.linkLabel3.LinkColor := System.Drawing.Color.FromArgb((System.Int32((System.Byte(5)))), (System.Int32((System.Byte(195)))), (System.Int32((System.Byte(255)))));
        self.linkLabel3.Location := new System.Drawing.Point(24, 38);
        self.linkLabel3.Name := 'linkLabel3';
        self.linkLabel3.Size := new System.Drawing.Size(94, 16);
        self.linkLabel3.TabIndex := 1;
        self.linkLabel3.TabStop := true;
        self.linkLabel3.Text := 'Host a server';
        self.linkLabel3.TextAlign := System.Drawing.ContentAlignment.MiddleLeft;
        self.linkLabel3.LinkClicked += linkLabel3_LinkClicked;
        // 
        // pictureBox3
        // 
        self.pictureBox3.Image := (System.Drawing.Image(resources.GetObject('pictureBox3.Image')));
        self.pictureBox3.Location := new System.Drawing.Point(6, 38);
        self.pictureBox3.Name := 'pictureBox3';
        self.pictureBox3.Size := new System.Drawing.Size(16, 16);
        self.pictureBox3.TabIndex := 6;
        self.pictureBox3.TabStop := false;
        // 
        // linkLabel1
        // 
        self.linkLabel1.LinkColor := System.Drawing.Color.FromArgb((System.Int32((System.Byte(5)))), (System.Int32((System.Byte(195)))), (System.Int32((System.Byte(255)))));
        self.linkLabel1.Location := new System.Drawing.Point(24, 78);
        self.linkLabel1.Name := 'linkLabel1';
        self.linkLabel1.Size := new System.Drawing.Size(94, 16);
        self.linkLabel1.TabIndex := 2;
        self.linkLabel1.TabStop := true;
        self.linkLabel1.Text := 'Settings';
        self.linkLabel1.TextAlign := System.Drawing.ContentAlignment.MiddleLeft;
        self.linkLabel1.LinkClicked += linkLabel1_LinkClicked;
        // 
        // pictureBox2
        // 
        self.pictureBox2.Image := (System.Drawing.Image(resources.GetObject('pictureBox2.Image')));
        self.pictureBox2.Location := new System.Drawing.Point(6, 78);
        self.pictureBox2.Name := 'pictureBox2';
        self.pictureBox2.Size := new System.Drawing.Size(16, 16);
        self.pictureBox2.TabIndex := 4;
        self.pictureBox2.TabStop := false;
        // 
        // linkLabel2
        // 
        self.linkLabel2.LinkColor := System.Drawing.Color.FromArgb((System.Int32((System.Byte(5)))), (System.Int32((System.Byte(195)))), (System.Int32((System.Byte(255)))));
        self.linkLabel2.Location := new System.Drawing.Point(24, 16);
        self.linkLabel2.Name := 'linkLabel2';
        self.linkLabel2.Size := new System.Drawing.Size(94, 16);
        self.linkLabel2.TabIndex := 0;
        self.linkLabel2.TabStop := true;
        self.linkLabel2.Text := 'Open the client';
        self.linkLabel2.TextAlign := System.Drawing.ContentAlignment.MiddleLeft;
        self.linkLabel2.LinkClicked += linkLabel2_LinkClicked;
        // 
        // pictureBox1
        // 
        self.pictureBox1.Image := (System.Drawing.Image(resources.GetObject('pictureBox1.Image')));
        self.pictureBox1.Location := new System.Drawing.Point(6, 16);
        self.pictureBox1.Name := 'pictureBox1';
        self.pictureBox1.Size := new System.Drawing.Size(16, 16);
        self.pictureBox1.TabIndex := 2;
        self.pictureBox1.TabStop := false;
        // 
        // panel2
        // 
        self.panel2.AutoScroll := true;
        self.panel2.Controls.Add(self.label1);
        self.panel2.Controls.Add(self.groupBox3);
        self.panel2.Controls.Add(self.groupBox2);
        self.panel2.Dock := System.Windows.Forms.DockStyle.Fill;
        self.panel2.Location := new System.Drawing.Point(130, 24);
        self.panel2.Name := 'panel2';
        self.panel2.Size := new System.Drawing.Size(269, 267);
        self.panel2.TabIndex := 2;
        // 
        // label1
        // 
        self.label1.Dock := System.Windows.Forms.DockStyle.Bottom;
        self.label1.Font := new System.Drawing.Font('Microsoft Sans Serif', 6.75, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.label1.Location := new System.Drawing.Point(0, 292);
        self.label1.Name := 'label1';
        self.label1.Size := new System.Drawing.Size(252, 12);
        self.label1.TabIndex := 7;
        self.label1.Text := 'OS Version on Machine Name';
        self.label1.TextAlign := System.Drawing.ContentAlignment.BottomRight;
        // 
        // groupBox3
        // 
        self.groupBox3.Controls.Add(self.radioButton3);
        self.groupBox3.Controls.Add(self.pictureBox6);
        self.groupBox3.Controls.Add(self.button2);
        self.groupBox3.Controls.Add(self.radioButton4);
        self.groupBox3.Controls.Add(self.pictureBox7);
        self.groupBox3.Location := new System.Drawing.Point(6, 152);
        self.groupBox3.Name := 'groupBox3';
        self.groupBox3.Size := new System.Drawing.Size(239, 140);
        self.groupBox3.TabIndex := 6;
        self.groupBox3.TabStop := false;
        self.groupBox3.Text := 'Other';
        // 
        // radioButton3
        // 
        self.radioButton3.Location := new System.Drawing.Point(54, 76);
        self.radioButton3.Name := 'radioButton3';
        self.radioButton3.Size := new System.Drawing.Size(179, 24);
        self.radioButton3.TabIndex := 4;
        self.radioButton3.Text := 'Show system info';
        self.radioButton3.UseVisualStyleBackColor := true;
        // 
        // pictureBox6
        // 
        self.pictureBox6.Image := (System.Drawing.Image(resources.GetObject('pictureBox6.Image')));
        self.pictureBox6.Location := new System.Drawing.Point(6, 67);
        self.pictureBox6.Name := 'pictureBox6';
        self.pictureBox6.Size := new System.Drawing.Size(42, 42);
        self.pictureBox6.SizeMode := System.Windows.Forms.PictureBoxSizeMode.StretchImage;
        self.pictureBox6.TabIndex := 5;
        self.pictureBox6.TabStop := false;
        // 
        // button2
        // 
        self.button2.Location := new System.Drawing.Point(158, 111);
        self.button2.Name := 'button2';
        self.button2.Size := new System.Drawing.Size(75, 23);
        self.button2.TabIndex := 3;
        self.button2.Text := 'Do';
        self.button2.UseVisualStyleBackColor := true;
        self.button2.Click += button2_Click;
        // 
        // radioButton4
        // 
        self.radioButton4.Checked := true;
        self.radioButton4.Location := new System.Drawing.Point(54, 28);
        self.radioButton4.Name := 'radioButton4';
        self.radioButton4.Size := new System.Drawing.Size(179, 24);
        self.radioButton4.TabIndex := 1;
        self.radioButton4.TabStop := true;
        self.radioButton4.Text := 'Open settings';
        self.radioButton4.UseVisualStyleBackColor := true;
        // 
        // pictureBox7
        // 
        self.pictureBox7.Image := (System.Drawing.Image(resources.GetObject('pictureBox7.Image')));
        self.pictureBox7.Location := new System.Drawing.Point(6, 19);
        self.pictureBox7.Name := 'pictureBox7';
        self.pictureBox7.Size := new System.Drawing.Size(42, 42);
        self.pictureBox7.SizeMode := System.Windows.Forms.PictureBoxSizeMode.StretchImage;
        self.pictureBox7.TabIndex := 2;
        self.pictureBox7.TabStop := false;
        // 
        // groupBox2
        // 
        self.groupBox2.Controls.Add(self.radioButton2);
        self.groupBox2.Controls.Add(self.pictureBox5);
        self.groupBox2.Controls.Add(self.button1);
        self.groupBox2.Controls.Add(self.radioButton1);
        self.groupBox2.Controls.Add(self.pictureBox4);
        self.groupBox2.Location := new System.Drawing.Point(6, 6);
        self.groupBox2.Name := 'groupBox2';
        self.groupBox2.Size := new System.Drawing.Size(239, 140);
        self.groupBox2.TabIndex := 5;
        self.groupBox2.TabStop := false;
        self.groupBox2.Text := 'MicChat';
        // 
        // radioButton2
        // 
        self.radioButton2.Location := new System.Drawing.Point(54, 76);
        self.radioButton2.Name := 'radioButton2';
        self.radioButton2.Size := new System.Drawing.Size(179, 24);
        self.radioButton2.TabIndex := 4;
        self.radioButton2.Text := 'Host a server';
        self.radioButton2.UseVisualStyleBackColor := true;
        // 
        // pictureBox5
        // 
        self.pictureBox5.Image := (System.Drawing.Image(resources.GetObject('pictureBox5.Image')));
        self.pictureBox5.Location := new System.Drawing.Point(6, 67);
        self.pictureBox5.Name := 'pictureBox5';
        self.pictureBox5.Size := new System.Drawing.Size(42, 42);
        self.pictureBox5.SizeMode := System.Windows.Forms.PictureBoxSizeMode.StretchImage;
        self.pictureBox5.TabIndex := 5;
        self.pictureBox5.TabStop := false;
        // 
        // button1
        // 
        self.button1.Location := new System.Drawing.Point(158, 111);
        self.button1.Name := 'button1';
        self.button1.Size := new System.Drawing.Size(75, 23);
        self.button1.TabIndex := 3;
        self.button1.Text := 'Do';
        self.button1.UseVisualStyleBackColor := true;
        self.button1.Click += button1_Click;
        // 
        // radioButton1
        // 
        self.radioButton1.Checked := true;
        self.radioButton1.Location := new System.Drawing.Point(54, 28);
        self.radioButton1.Name := 'radioButton1';
        self.radioButton1.Size := new System.Drawing.Size(179, 24);
        self.radioButton1.TabIndex := 1;
        self.radioButton1.TabStop := true;
        self.radioButton1.Text := 'Open the client';
        self.radioButton1.UseVisualStyleBackColor := true;
        // 
        // pictureBox4
        // 
        self.pictureBox4.Image := (System.Drawing.Image(resources.GetObject('pictureBox4.Image')));
        self.pictureBox4.Location := new System.Drawing.Point(6, 19);
        self.pictureBox4.Name := 'pictureBox4';
        self.pictureBox4.Size := new System.Drawing.Size(42, 42);
        self.pictureBox4.SizeMode := System.Windows.Forms.PictureBoxSizeMode.StretchImage;
        self.pictureBox4.TabIndex := 2;
        self.pictureBox4.TabStop := false;
        // 
        // notifyIcon1
        // 
        self.notifyIcon1.BalloonTipIcon := System.Windows.Forms.ToolTipIcon.Info;
        self.notifyIcon1.BalloonTipText := 'To show it, double-click it''s icon in the tray';
        self.notifyIcon1.BalloonTipTitle := 'MicChat is still opened';
        self.notifyIcon1.ContextMenuStrip := self.contextMenuStrip1;
        self.notifyIcon1.Icon := (System.Drawing.Icon(resources.GetObject('notifyIcon1.Icon')));
        self.notifyIcon1.Text := 'MicChat Revived Edition';
        self.notifyIcon1.Visible := true;
        self.notifyIcon1.MouseDoubleClick += notifyIcon1_MouseDoubleClick;
        // 
        // contextMenuStrip1
        // 
        self.contextMenuStrip1.Items.AddRange(new System.Windows.Forms.ToolStripItem[9](self.openTheClientToolStripMenuItem1, self.hostAServerToolStripMenuItem1, self.toolStripSeparator3, self.showSystemInfoToolStripMenuItem1, self.toolStripSeparator5, self.showMicChatToolStripMenuItem, self.hideMicChatToolStripMenuItem, self.toolStripSeparator4, self.closeMicChatToolStripMenuItem));
        self.contextMenuStrip1.Name := 'contextMenuStrip1';
        self.contextMenuStrip1.Size := new System.Drawing.Size(168, 154);
        // 
        // openTheClientToolStripMenuItem1
        // 
        self.openTheClientToolStripMenuItem1.Image := (System.Drawing.Image(resources.GetObject('openTheClientToolStripMenuItem1.Image')));
        self.openTheClientToolStripMenuItem1.Name := 'openTheClientToolStripMenuItem1';
        self.openTheClientToolStripMenuItem1.Size := new System.Drawing.Size(167, 22);
        self.openTheClientToolStripMenuItem1.Text := 'Open the client';
        self.openTheClientToolStripMenuItem1.Click += openTheClientToolStripMenuItem1_Click;
        // 
        // hostAServerToolStripMenuItem1
        // 
        self.hostAServerToolStripMenuItem1.Image := (System.Drawing.Image(resources.GetObject('hostAServerToolStripMenuItem1.Image')));
        self.hostAServerToolStripMenuItem1.Name := 'hostAServerToolStripMenuItem1';
        self.hostAServerToolStripMenuItem1.Size := new System.Drawing.Size(167, 22);
        self.hostAServerToolStripMenuItem1.Text := 'Host a server';
        self.hostAServerToolStripMenuItem1.Click += hostAServerToolStripMenuItem1_Click;
        // 
        // toolStripSeparator3
        // 
        self.toolStripSeparator3.Name := 'toolStripSeparator3';
        self.toolStripSeparator3.Size := new System.Drawing.Size(164, 6);
        // 
        // showSystemInfoToolStripMenuItem1
        // 
        self.showSystemInfoToolStripMenuItem1.Image := (System.Drawing.Image(resources.GetObject('showSystemInfoToolStripMenuItem1.Image')));
        self.showSystemInfoToolStripMenuItem1.Name := 'showSystemInfoToolStripMenuItem1';
        self.showSystemInfoToolStripMenuItem1.Size := new System.Drawing.Size(167, 22);
        self.showSystemInfoToolStripMenuItem1.Text := 'Show system info';
        self.showSystemInfoToolStripMenuItem1.Click += showSystemInfoToolStripMenuItem1_Click;
        // 
        // toolStripSeparator5
        // 
        self.toolStripSeparator5.Name := 'toolStripSeparator5';
        self.toolStripSeparator5.Size := new System.Drawing.Size(164, 6);
        // 
        // showMicChatToolStripMenuItem
        // 
        self.showMicChatToolStripMenuItem.Image := (System.Drawing.Image(resources.GetObject('showMicChatToolStripMenuItem.Image')));
        self.showMicChatToolStripMenuItem.Name := 'showMicChatToolStripMenuItem';
        self.showMicChatToolStripMenuItem.Size := new System.Drawing.Size(167, 22);
        self.showMicChatToolStripMenuItem.Text := 'Show MicChat';
        self.showMicChatToolStripMenuItem.Visible := false;
        self.showMicChatToolStripMenuItem.Click += showMicChatToolStripMenuItem_Click;
        // 
        // hideMicChatToolStripMenuItem
        // 
        self.hideMicChatToolStripMenuItem.Image := (System.Drawing.Image(resources.GetObject('hideMicChatToolStripMenuItem.Image')));
        self.hideMicChatToolStripMenuItem.Name := 'hideMicChatToolStripMenuItem';
        self.hideMicChatToolStripMenuItem.Size := new System.Drawing.Size(167, 22);
        self.hideMicChatToolStripMenuItem.Text := 'Hide MicChat';
        self.hideMicChatToolStripMenuItem.Click += hideMicChatToolStripMenuItem_Click;
        // 
        // toolStripSeparator4
        // 
        self.toolStripSeparator4.Name := 'toolStripSeparator4';
        self.toolStripSeparator4.Size := new System.Drawing.Size(164, 6);
        // 
        // closeMicChatToolStripMenuItem
        // 
        self.closeMicChatToolStripMenuItem.Image := (System.Drawing.Image(resources.GetObject('closeMicChatToolStripMenuItem.Image')));
        self.closeMicChatToolStripMenuItem.Name := 'closeMicChatToolStripMenuItem';
        self.closeMicChatToolStripMenuItem.Size := new System.Drawing.Size(167, 22);
        self.closeMicChatToolStripMenuItem.Text := 'Close MicChat';
        self.closeMicChatToolStripMenuItem.Click += closeMicChatToolStripMenuItem_Click;
        // 
        // Form1
        // 
        self.ClientSize := new System.Drawing.Size(399, 291);
        self.Controls.Add(self.panel2);
        self.Controls.Add(self.panel1);
        self.Controls.Add(self.menuStrip1);
        self.FormBorderStyle := System.Windows.Forms.FormBorderStyle.FixedSingle;
        self.Icon := (System.Drawing.Icon(resources.GetObject('$this.Icon')));
        self.MainMenuStrip := self.menuStrip1;
        self.MaximizeBox := false;
        self.Name := 'Form1';
        self.StartPosition := System.Windows.Forms.FormStartPosition.CenterScreen;
        self.Text := 'MicChat Revived Edition';
        self.FormClosed += Form1_FormClosed;
        self.Load += Form1_Load;
        self.menuStrip1.ResumeLayout(false);
        self.menuStrip1.PerformLayout();
        self.panel1.ResumeLayout(false);
        self.groupBox1.ResumeLayout(false);
        (System.ComponentModel.ISupportInitialize(self.pictureBox3)).EndInit();
        (System.ComponentModel.ISupportInitialize(self.pictureBox2)).EndInit();
        (System.ComponentModel.ISupportInitialize(self.pictureBox1)).EndInit();
        self.panel2.ResumeLayout(false);
        self.groupBox3.ResumeLayout(false);
        (System.ComponentModel.ISupportInitialize(self.pictureBox6)).EndInit();
        (System.ComponentModel.ISupportInitialize(self.pictureBox7)).EndInit();
        self.groupBox2.ResumeLayout(false);
        (System.ComponentModel.ISupportInitialize(self.pictureBox5)).EndInit();
        (System.ComponentModel.ISupportInitialize(self.pictureBox4)).EndInit();
        self.contextMenuStrip1.ResumeLayout(false);
        self.ResumeLayout(false);
        self.PerformLayout();
    end;
