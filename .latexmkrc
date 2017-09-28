$filename = 'main';
$pdflatex = 'pdflatex -interaction=nonstopmode -halt-on-error --shell-escape %O %S';
$out_dir = "auxiliary";
$pdf_mode = 1;
@default_files = ($filename . '.tex');
$pdf_update_method = 4;
$out_file = $out_dir . '/' . $filename . '.pdf';