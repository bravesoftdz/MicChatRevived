procedure InitializeComponent;
    begin
        var resources: System.ComponentModel.ComponentResourceManager := new System.ComponentModel.ComponentResourceManager(typeof(Form1));
        self.SuspendLayout();
        // 
        // Form1
        // 
        self.ClientSize := new System.Drawing.Size(284, 261);
        self.FormBorderStyle := System.Windows.Forms.FormBorderStyle.None;
        self.Icon := (System.Drawing.Icon(resources.GetObject('$this.Icon')));
        self.MaximizeBox := false;
        self.MinimizeBox := false;
        self.Name := 'Form1';
        self.ShowIcon := false;
        self.ShowInTaskbar := false;
        self.StartPosition := System.Windows.Forms.FormStartPosition.CenterScreen;
        self.Text := 'MicChat Revived Edition Splash';
        self.ResumeLayout(false);
    end;
