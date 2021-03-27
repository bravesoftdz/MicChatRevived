procedure InitializeComponent;
    begin
        self.components := new System.ComponentModel.Container();
        var resources: System.ComponentModel.ComponentResourceManager := new System.ComponentModel.ComponentResourceManager(typeof(SplashScreenForm));
        self.timer1 := new System.Windows.Forms.Timer(self.components);
        self.SuspendLayout();
        // 
        // timer1
        // 
        self.timer1.Enabled := true;
        self.timer1.Interval := 1000;
        self.timer1.Tick += timer1_Tick;
        // 
        // SplashScreenForm
        // 
        self.BackgroundImage := (System.Drawing.Image(resources.GetObject('$this.BackgroundImage')));
        self.BackgroundImageLayout := System.Windows.Forms.ImageLayout.Stretch;
        self.ClientSize := new System.Drawing.Size(300, 200);
        self.FormBorderStyle := System.Windows.Forms.FormBorderStyle.None;
        self.Icon := (System.Drawing.Icon(resources.GetObject('$this.Icon')));
        self.MaximizeBox := false;
        self.MinimizeBox := false;
        self.Name := 'SplashScreenForm';
        self.ShowIcon := false;
        self.ShowInTaskbar := false;
        self.StartPosition := System.Windows.Forms.FormStartPosition.CenterScreen;
        self.Text := 'MicChat Revived Edition Splash';
        self.TopMost := true;
        self.ResumeLayout(false);
    end;
