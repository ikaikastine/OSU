<?xml version="1.0" encoding="UTF-8"?>
<drawing version="7">
    <attr value="xc9500xl" name="DeviceFamilyName">
        <trait delete="all:0" />
        <trait editname="all:0" />
        <trait edittrait="all:0" />
    </attr>
    <netlist>
        <signal name="XLXN_3" />
        <signal name="XLXN_4" />
        <signal name="XLXN_6" />
        <signal name="XLXN_7" />
        <signal name="XLXN_8" />
        <signal name="XLXN_9" />
        <signal name="XLXN_10" />
        <signal name="XLXN_11" />
        <signal name="A" />
        <signal name="B" />
        <signal name="C" />
        <signal name="XLXN_27" />
        <signal name="XLXN_28" />
        <signal name="XLXN_30" />
        <signal name="LE" />
        <signal name="LD" />
        <signal name="RE" />
        <signal name="RD" />
        <port polarity="Input" name="A" />
        <port polarity="Input" name="B" />
        <port polarity="Input" name="C" />
        <port polarity="Output" name="LE" />
        <port polarity="Output" name="LD" />
        <port polarity="Output" name="RE" />
        <port polarity="Output" name="RD" />
        <blockdef name="and2">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="64" y1="-64" y2="-64" x1="0" />
            <line x2="64" y1="-128" y2="-128" x1="0" />
            <line x2="192" y1="-96" y2="-96" x1="256" />
            <arc ex="144" ey="-144" sx="144" sy="-48" r="48" cx="144" cy="-96" />
            <line x2="64" y1="-48" y2="-48" x1="144" />
            <line x2="144" y1="-144" y2="-144" x1="64" />
            <line x2="64" y1="-48" y2="-144" x1="64" />
        </blockdef>
        <blockdef name="and3">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="64" y1="-64" y2="-64" x1="0" />
            <line x2="64" y1="-128" y2="-128" x1="0" />
            <line x2="64" y1="-192" y2="-192" x1="0" />
            <line x2="192" y1="-128" y2="-128" x1="256" />
            <line x2="144" y1="-176" y2="-176" x1="64" />
            <line x2="64" y1="-80" y2="-80" x1="144" />
            <arc ex="144" ey="-176" sx="144" sy="-80" r="48" cx="144" cy="-128" />
            <line x2="64" y1="-64" y2="-192" x1="64" />
        </blockdef>
        <blockdef name="and2b2">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="40" y1="-64" y2="-64" x1="0" />
            <circle r="12" cx="52" cy="-64" />
            <line x2="40" y1="-128" y2="-128" x1="0" />
            <circle r="12" cx="52" cy="-128" />
            <line x2="192" y1="-96" y2="-96" x1="256" />
            <arc ex="144" ey="-144" sx="144" sy="-48" r="48" cx="144" cy="-96" />
            <line x2="64" y1="-48" y2="-144" x1="64" />
            <line x2="64" y1="-48" y2="-48" x1="144" />
            <line x2="144" y1="-144" y2="-144" x1="64" />
        </blockdef>
        <blockdef name="and2b1">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="64" y1="-48" y2="-144" x1="64" />
            <line x2="144" y1="-144" y2="-144" x1="64" />
            <line x2="64" y1="-48" y2="-48" x1="144" />
            <arc ex="144" ey="-144" sx="144" sy="-48" r="48" cx="144" cy="-96" />
            <line x2="192" y1="-96" y2="-96" x1="256" />
            <line x2="64" y1="-128" y2="-128" x1="0" />
            <line x2="40" y1="-64" y2="-64" x1="0" />
            <circle r="12" cx="52" cy="-64" />
        </blockdef>
        <blockdef name="inv">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="64" y1="-32" y2="-32" x1="0" />
            <line x2="160" y1="-32" y2="-32" x1="224" />
            <line x2="128" y1="-64" y2="-32" x1="64" />
            <line x2="64" y1="-32" y2="0" x1="128" />
            <line x2="64" y1="0" y2="-64" x1="64" />
            <circle r="16" cx="144" cy="-32" />
        </blockdef>
        <blockdef name="or2">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="64" y1="-64" y2="-64" x1="0" />
            <line x2="64" y1="-128" y2="-128" x1="0" />
            <line x2="192" y1="-96" y2="-96" x1="256" />
            <arc ex="192" ey="-96" sx="112" sy="-48" r="88" cx="116" cy="-136" />
            <arc ex="48" ey="-144" sx="48" sy="-48" r="56" cx="16" cy="-96" />
            <line x2="48" y1="-144" y2="-144" x1="112" />
            <arc ex="112" ey="-144" sx="192" sy="-96" r="88" cx="116" cy="-56" />
            <line x2="48" y1="-48" y2="-48" x1="112" />
        </blockdef>
        <block symbolname="and3" name="XLXI_2">
            <blockpin signalname="XLXN_30" name="I0" />
            <blockpin signalname="XLXN_28" name="I1" />
            <blockpin signalname="XLXN_27" name="I2" />
            <blockpin signalname="XLXN_4" name="O" />
        </block>
        <block symbolname="and2b2" name="XLXI_3">
            <blockpin signalname="XLXN_28" name="I0" />
            <blockpin signalname="XLXN_27" name="I1" />
            <blockpin signalname="XLXN_3" name="O" />
        </block>
        <block symbolname="and2b1" name="XLXI_4">
            <blockpin signalname="XLXN_28" name="I0" />
            <blockpin signalname="XLXN_27" name="I1" />
            <blockpin signalname="XLXN_7" name="O" />
        </block>
        <block symbolname="and2" name="XLXI_5">
            <blockpin signalname="XLXN_28" name="I0" />
            <blockpin signalname="XLXN_27" name="I1" />
            <blockpin signalname="XLXN_6" name="O" />
        </block>
        <block symbolname="and2b2" name="XLXI_6">
            <blockpin signalname="XLXN_30" name="I0" />
            <blockpin signalname="XLXN_28" name="I1" />
            <blockpin signalname="XLXN_8" name="O" />
        </block>
        <block symbolname="and3" name="XLXI_7">
            <blockpin signalname="XLXN_30" name="I0" />
            <blockpin signalname="XLXN_28" name="I1" />
            <blockpin signalname="XLXN_27" name="I2" />
            <blockpin signalname="XLXN_9" name="O" />
        </block>
        <block symbolname="and2b1" name="XLXI_8">
            <blockpin signalname="XLXN_27" name="I0" />
            <blockpin signalname="XLXN_30" name="I1" />
            <blockpin signalname="XLXN_10" name="O" />
        </block>
        <block symbolname="and2b1" name="XLXI_9">
            <blockpin signalname="XLXN_28" name="I0" />
            <blockpin signalname="XLXN_30" name="I1" />
            <blockpin signalname="XLXN_11" name="O" />
        </block>
        <block symbolname="or2" name="XLXI_11">
            <blockpin signalname="XLXN_4" name="I0" />
            <blockpin signalname="XLXN_3" name="I1" />
            <blockpin signalname="LE" name="O" />
        </block>
        <block symbolname="or2" name="XLXI_12">
            <blockpin signalname="XLXN_6" name="I0" />
            <blockpin signalname="XLXN_7" name="I1" />
            <blockpin signalname="LD" name="O" />
        </block>
        <block symbolname="or2" name="XLXI_13">
            <blockpin signalname="XLXN_9" name="I0" />
            <blockpin signalname="XLXN_8" name="I1" />
            <blockpin signalname="RE" name="O" />
        </block>
        <block symbolname="or2" name="XLXI_14">
            <blockpin signalname="XLXN_11" name="I0" />
            <blockpin signalname="XLXN_10" name="I1" />
            <blockpin signalname="RD" name="O" />
        </block>
        <block symbolname="inv" name="XLXI_15">
            <blockpin signalname="A" name="I" />
            <blockpin signalname="XLXN_27" name="O" />
        </block>
        <block symbolname="inv" name="XLXI_16">
            <blockpin signalname="B" name="I" />
            <blockpin signalname="XLXN_28" name="O" />
        </block>
        <block symbolname="inv" name="XLXI_18">
            <blockpin signalname="C" name="I" />
            <blockpin signalname="XLXN_30" name="O" />
        </block>
    </netlist>
    <sheet sheetnum="1" width="3520" height="2720">
        <instance x="816" y="1072" name="XLXI_2" orien="R0" />
        <instance x="816" y="736" name="XLXI_3" orien="R0" />
        <instance x="816" y="1376" name="XLXI_4" orien="R0" />
        <instance x="816" y="1616" name="XLXI_5" orien="R0" />
        <instance x="816" y="1872" name="XLXI_6" orien="R0" />
        <instance x="816" y="2128" name="XLXI_7" orien="R0" />
        <instance x="816" y="2336" name="XLXI_8" orien="R0" />
        <instance x="816" y="2576" name="XLXI_9" orien="R0" />
        <instance x="1472" y="880" name="XLXI_11" orien="R0" />
        <instance x="1488" y="1488" name="XLXI_12" orien="R0" />
        <instance x="1472" y="1968" name="XLXI_13" orien="R0" />
        <instance x="1472" y="2464" name="XLXI_14" orien="R0" />
        <branch name="XLXN_3">
            <wire x2="1264" y1="640" y2="640" x1="1072" />
            <wire x2="1264" y1="640" y2="752" x1="1264" />
            <wire x2="1472" y1="752" y2="752" x1="1264" />
        </branch>
        <branch name="XLXN_4">
            <wire x2="1264" y1="944" y2="944" x1="1072" />
            <wire x2="1264" y1="816" y2="944" x1="1264" />
            <wire x2="1472" y1="816" y2="816" x1="1264" />
        </branch>
        <branch name="XLXN_6">
            <wire x2="1280" y1="1520" y2="1520" x1="1072" />
            <wire x2="1280" y1="1424" y2="1520" x1="1280" />
            <wire x2="1488" y1="1424" y2="1424" x1="1280" />
        </branch>
        <branch name="XLXN_7">
            <wire x2="1280" y1="1280" y2="1280" x1="1072" />
            <wire x2="1280" y1="1280" y2="1360" x1="1280" />
            <wire x2="1488" y1="1360" y2="1360" x1="1280" />
        </branch>
        <branch name="XLXN_8">
            <wire x2="1264" y1="1776" y2="1776" x1="1072" />
            <wire x2="1264" y1="1776" y2="1840" x1="1264" />
            <wire x2="1472" y1="1840" y2="1840" x1="1264" />
        </branch>
        <branch name="XLXN_9">
            <wire x2="1264" y1="2000" y2="2000" x1="1072" />
            <wire x2="1264" y1="1904" y2="2000" x1="1264" />
            <wire x2="1472" y1="1904" y2="1904" x1="1264" />
        </branch>
        <branch name="XLXN_10">
            <wire x2="1264" y1="2240" y2="2240" x1="1072" />
            <wire x2="1264" y1="2240" y2="2336" x1="1264" />
            <wire x2="1472" y1="2336" y2="2336" x1="1264" />
        </branch>
        <branch name="XLXN_11">
            <wire x2="1264" y1="2480" y2="2480" x1="1072" />
            <wire x2="1264" y1="2400" y2="2480" x1="1264" />
            <wire x2="1472" y1="2400" y2="2400" x1="1264" />
        </branch>
        <branch name="A">
            <wire x2="352" y1="176" y2="320" x1="352" />
        </branch>
        <branch name="B">
            <wire x2="480" y1="176" y2="320" x1="480" />
        </branch>
        <branch name="C">
            <wire x2="576" y1="176" y2="320" x1="576" />
        </branch>
        <instance x="320" y="320" name="XLXI_15" orien="R90" />
        <instance x="448" y="320" name="XLXI_16" orien="R90" />
        <instance x="544" y="320" name="XLXI_18" orien="R90" />
        <iomarker fontsize="28" x="352" y="176" name="A" orien="R270" />
        <iomarker fontsize="28" x="480" y="176" name="B" orien="R270" />
        <iomarker fontsize="28" x="576" y="176" name="C" orien="R270" />
        <branch name="XLXN_27">
            <wire x2="352" y1="544" y2="608" x1="352" />
            <wire x2="816" y1="608" y2="608" x1="352" />
            <wire x2="352" y1="608" y2="880" x1="352" />
            <wire x2="816" y1="880" y2="880" x1="352" />
            <wire x2="352" y1="880" y2="1248" x1="352" />
            <wire x2="352" y1="1248" y2="1264" x1="352" />
            <wire x2="352" y1="1264" y2="1488" x1="352" />
            <wire x2="352" y1="1488" y2="1504" x1="352" />
            <wire x2="352" y1="1504" y2="1920" x1="352" />
            <wire x2="352" y1="1920" y2="2272" x1="352" />
            <wire x2="816" y1="2272" y2="2272" x1="352" />
            <wire x2="816" y1="1920" y2="1920" x1="352" />
            <wire x2="816" y1="1920" y2="1936" x1="816" />
            <wire x2="816" y1="1488" y2="1488" x1="352" />
            <wire x2="816" y1="1248" y2="1248" x1="352" />
        </branch>
        <branch name="XLXN_28">
            <wire x2="480" y1="544" y2="672" x1="480" />
            <wire x2="816" y1="672" y2="672" x1="480" />
            <wire x2="480" y1="672" y2="944" x1="480" />
            <wire x2="480" y1="944" y2="1312" x1="480" />
            <wire x2="480" y1="1312" y2="1552" x1="480" />
            <wire x2="816" y1="1552" y2="1552" x1="480" />
            <wire x2="480" y1="1552" y2="1744" x1="480" />
            <wire x2="480" y1="1744" y2="2000" x1="480" />
            <wire x2="480" y1="2000" y2="2512" x1="480" />
            <wire x2="816" y1="2512" y2="2512" x1="480" />
            <wire x2="816" y1="2000" y2="2000" x1="480" />
            <wire x2="816" y1="1744" y2="1744" x1="480" />
            <wire x2="816" y1="1312" y2="1312" x1="480" />
            <wire x2="816" y1="944" y2="944" x1="480" />
        </branch>
        <branch name="XLXN_30">
            <wire x2="576" y1="544" y2="1008" x1="576" />
            <wire x2="576" y1="1008" y2="1808" x1="576" />
            <wire x2="576" y1="1808" y2="2080" x1="576" />
            <wire x2="576" y1="2080" y2="2208" x1="576" />
            <wire x2="576" y1="2208" y2="2448" x1="576" />
            <wire x2="816" y1="2448" y2="2448" x1="576" />
            <wire x2="816" y1="2208" y2="2208" x1="576" />
            <wire x2="816" y1="2080" y2="2080" x1="576" />
            <wire x2="816" y1="1808" y2="1808" x1="576" />
            <wire x2="816" y1="1008" y2="1008" x1="576" />
            <wire x2="816" y1="2064" y2="2080" x1="816" />
        </branch>
        <branch name="LE">
            <wire x2="2000" y1="784" y2="784" x1="1728" />
            <wire x2="2224" y1="784" y2="784" x1="2000" />
            <wire x2="2544" y1="784" y2="784" x1="2224" />
        </branch>
        <branch name="LD">
            <wire x2="1984" y1="1392" y2="1392" x1="1744" />
            <wire x2="2208" y1="1392" y2="1392" x1="1984" />
            <wire x2="2544" y1="1392" y2="1392" x1="2208" />
        </branch>
        <branch name="RE">
            <wire x2="1968" y1="1872" y2="1872" x1="1728" />
            <wire x2="2192" y1="1872" y2="1872" x1="1968" />
            <wire x2="2544" y1="1872" y2="1872" x1="2192" />
        </branch>
        <branch name="RD">
            <wire x2="1968" y1="2368" y2="2368" x1="1728" />
            <wire x2="2192" y1="2368" y2="2368" x1="1968" />
            <wire x2="2528" y1="2368" y2="2368" x1="2192" />
        </branch>
        <iomarker fontsize="28" x="2544" y="784" name="LE" orien="R0" />
        <iomarker fontsize="28" x="2544" y="1392" name="LD" orien="R0" />
        <iomarker fontsize="28" x="2544" y="1872" name="RE" orien="R0" />
        <iomarker fontsize="28" x="2528" y="2368" name="RD" orien="R0" />
    </sheet>
</drawing>