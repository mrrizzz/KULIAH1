<?php
if (isset($_POST["station"])) {
    $station = $_POST["station"];
    $file = fopen("Cdata.dat", "r");
    while (($line = fgets($file)) !== false) {
        $parts = explode(" ", $line); 
        if ($parts[0] == $station) {
            echo "<table border='2'> 
            <tr>
                <td rowspan=2 style='text-align:center'>STATION</td>
                <td colspan=3 style='text-align:center'>SIMULATED</td>
                <td colspan=3 style='text-align:center'>MEASRUED</td>
                <td colspan=3 style='text-align:center'>DIFFERENCE</td>
                <td rowspan=2 style='text-align:center'>R<sup>2</sup></td>
            </tr>
            <tr>
                <td style='text-align:center'>mean</td>
                <td style='text-align:center'>5%tile</td>
                <td style='text-align:center'>95% tile</td>
                <td style='text-align:center'>mean </td>
                <td style='text-align:center'>5%tile</td>
                <td style='text-align:center'>95% tile</td>
                <td style='text-align:center'>mean </td>
                <td style='text-align:center'>5%tile</td>
                <td style='text-align:center'>95% tile</td>
            </tr>";
            foreach ($parts as $part) {
                echo "<td style='text-align:center'>" . $part . "</td>";
            }
            echo "</tr>";
            echo "</table>";
            fclose($file);
            return;
        }
    }
    fclose($file);
    echo "Station not found.";
}
?>
