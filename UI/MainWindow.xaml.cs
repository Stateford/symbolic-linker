using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Navigation;
using System.Windows.Shapes;
using System.Windows.Forms;

namespace UI
{
    /// <summary>
    /// Interaction logic for MainWindow.xaml
    /// </summary>
    public partial class MainWindow : Window
    {
        public MainWindow()
        {
            InitializeComponent();
        }

        /// <summary>
        /// Opens a folder browser and returns the path
        /// </summary>
        /// <returns>file path</returns>
        private string Get_path()
        {
            using (var openFileDialog = new FolderBrowserDialog())
            {
                var result = openFileDialog.ShowDialog();
                if (result == System.Windows.Forms.DialogResult.OK)
                    return openFileDialog.SelectedPath;

                return null;
            }
        }

        /// <summary>
        /// Get the path when the button is clicked
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>
        private void BTN_PATH_Click(object sender, RoutedEventArgs e)
        {
            var path = Get_path();

            if(path != null)
                TXT_PATH.Text = path;
        }

        /// <summary>
        /// Get the target path when the button is clicked
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>
        private void BTN_TARGET_Click(object sender, RoutedEventArgs e)
        {
            var path = Get_path();

            if (path != null)
                TXT_TARGET.Text = path;
        }
    }
}
