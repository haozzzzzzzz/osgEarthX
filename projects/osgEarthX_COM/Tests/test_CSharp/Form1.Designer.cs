namespace test_CSharp
{
    partial class Form1
    {
        /// <summary>
        /// 必需的设计器变量。
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// 清理所有正在使用的资源。
        /// </summary>
        /// <param name="disposing">如果应释放托管资源，为 true；否则为 false。</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows 窗体设计器生成的代码

        /// <summary>
        /// 设计器支持所需的方法 - 不要
        /// 使用代码编辑器修改此方法的内容。
        /// </summary>
        private void InitializeComponent()
        {
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(Form1));
            this.axEarthCtrl1 = new AxosgEarthX_COMLib.AxEarthCtrl();
            ((System.ComponentModel.ISupportInitialize)(this.axEarthCtrl1)).BeginInit();
            this.SuspendLayout();
            // 
            // axEarthCtrl1
            // 
            this.axEarthCtrl1.Dock = System.Windows.Forms.DockStyle.Fill;
            this.axEarthCtrl1.Enabled = true;
            this.axEarthCtrl1.Location = new System.Drawing.Point(0, 0);
            this.axEarthCtrl1.Name = "axEarthCtrl1";
            this.axEarthCtrl1.OcxState = ((System.Windows.Forms.AxHost.State)(resources.GetObject("axEarthCtrl1.OcxState")));
            this.axEarthCtrl1.Size = new System.Drawing.Size(284, 261);
            this.axEarthCtrl1.TabIndex = 0;
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(284, 261);
            this.Controls.Add(this.axEarthCtrl1);
            this.Name = "Form1";
            this.Text = "Form1";
            ((System.ComponentModel.ISupportInitialize)(this.axEarthCtrl1)).EndInit();
            this.ResumeLayout(false);

        }

        #endregion

        private AxosgEarthX_COMLib.AxEarthCtrl axEarthCtrl1;
    }
}

