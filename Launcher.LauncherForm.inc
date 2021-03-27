procedure InitializeComponent;
    begin
        self.components := new System.ComponentModel.Container();
        var resources: System.ComponentModel.ComponentResourceManager := new System.ComponentModel.ComponentResourceManager(typeof(LauncherForm));
        self.timer1 := new System.Windows.Forms.Timer(self.components);
        self.SuspendLayout();
        // 
        // timer1
        // 
        self.timer1.Interval := 1000;
        self.timer1.Tick += timer1_Tick;
        // 
        // LauncherForm
        // 
        self.ClientSize := new System.Drawing.Size(0, 0);
        self.FormBorderStyle := System.Windows.Forms.FormBorderStyle.None;
        self.Icon := (System.Drawing.Icon(resources.GetObject('$this.Icon')));
        self.MaximizeBox := false;
        self.MinimizeBox := false;
        self.Name := 'LauncherForm';
        self.Opacity := 0;
        self.ShowIcon := false;
        self.ShowInTaskbar := false;
        self.Text := 'MicChat Revived Edition Launcher';
        self.TransparencyKey := System.Drawing.SystemColors.Control;
        self.WindowState := System.Windows.Forms.FormWindowState.Minimized;
        self.Load += Form1_Load;
        self.ResumeLayout(false);
    end;
