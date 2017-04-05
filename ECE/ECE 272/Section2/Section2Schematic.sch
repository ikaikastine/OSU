<?xml version="1.0" encoding="UTF-8"?>
<drawing version="7">
    <attr value="xc9500xl" name="DeviceFamilyName">
        <trait delete="all:0" />
        <trait editname="all:0" />
        <trait edittrait="all:0" />
    </attr>
    <netlist>
        <signal name="XLXN_1" />
        <signal name="XLXN_3" />
        <signal name="XLXN_5" />
        <signal name="XLXN_6" />
        <signal name="XLXN_7" />
        <signal name="XLXN_8" />
        <signal name="Z" />
        <signal name="A" />
        <signal name="B" />
        <signal name="C" />
        <port polarity="Output" name="Z" />
        <port polarity="Input" name="A" />
        <port polarity="Input" name="B" />
        <port polarity="Input" name="C" />
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
        <blockdef name="xor2">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="64" y1="-64" y2="-64" x1="0" />
            <line x2="60" y1="-128" y2="-128" x1="0" />
            <line x2="208" y1="-96" y2="-96" x1="256" />
            <arc ex="44" ey="-144" sx="48" sy="-48" r="56" cx="16" cy="-96" />
            <arc ex="64" ey="-144" sx="64" sy="-48" r="56" cx="32" cy="-96" />
            <line x2="64" y1="-144" y2="-144" x1="128" />
            <line x2="64" y1="-48" y2="-48" x1="128" />
            <arc ex="128" ey="-144" sx="208" sy="-96" r="88" cx="132" cy="-56" />
            <arc ex="208" ey="-96" sx="128" sy="-48" r="88" cx="132" cy="-136" />
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
        <blockdef name="obuf">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="64" y1="0" y2="-64" x1="64" />
            <line x2="64" y1="-32" y2="0" x1="128" />
            <line x2="128" y1="-64" y2="-32" x1="64" />
            <line x2="64" y1="-32" y2="-32" x1="0" />
            <line x2="128" y1="-32" y2="-32" x1="224" />
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
        <block symbolname="and2" name="XLXI_1">
            <blockpin signalname="XLXN_7" name="I0" />
            <blockpin signalname="XLXN_6" name="I1" />
            <blockpin signalname="XLXN_8" name="O" />
        </block>
        <block symbolname="xor2" name="XLXI_2">
            <blockpin signalname="XLXN_3" name="I0" />
            <blockpin signalname="XLXN_1" name="I1" />
            <blockpin signalname="XLXN_6" name="O" />
        </block>
        <block symbolname="or2" name="XLXI_3">
            <blockpin signalname="XLXN_5" name="I0" />
            <blockpin signalname="XLXN_3" name="I1" />
            <blockpin signalname="XLXN_7" name="O" />
        </block>
        <block symbolname="obuf" name="XLXI_9">
            <blockpin signalname="XLXN_8" name="I" />
            <blockpin signalname="Z" name="O" />
        </block>
        <block symbolname="inv" name="XLXI_10">
            <blockpin signalname="A" name="I" />
            <blockpin signalname="XLXN_1" name="O" />
        </block>
        <block symbolname="inv" name="XLXI_11">
            <blockpin signalname="B" name="I" />
            <blockpin signalname="XLXN_3" name="O" />
        </block>
        <block symbolname="inv" name="XLXI_12">
            <blockpin signalname="C" name="I" />
            <blockpin signalname="XLXN_5" name="O" />
        </block>
    </netlist>
    <sheet sheetnum="1" width="3520" height="2720">
        <instance x="1840" y="1424" name="XLXI_1" orien="R0" />
        <instance x="1200" y="1200" name="XLXI_2" orien="R0" />
        <instance x="1216" y="1648" name="XLXI_3" orien="R0" />
        <branch name="XLXN_1">
            <wire x2="1024" y1="1056" y2="1056" x1="864" />
            <wire x2="1024" y1="1056" y2="1072" x1="1024" />
            <wire x2="1200" y1="1072" y2="1072" x1="1024" />
        </branch>
        <branch name="XLXN_3">
            <wire x2="1088" y1="1312" y2="1312" x1="864" />
            <wire x2="1088" y1="1312" y2="1520" x1="1088" />
            <wire x2="1216" y1="1520" y2="1520" x1="1088" />
            <wire x2="1200" y1="1136" y2="1136" x1="1088" />
            <wire x2="1088" y1="1136" y2="1312" x1="1088" />
        </branch>
        <branch name="XLXN_5">
            <wire x2="1216" y1="1584" y2="1584" x1="864" />
        </branch>
        <branch name="XLXN_6">
            <wire x2="1648" y1="1104" y2="1104" x1="1456" />
            <wire x2="1648" y1="1104" y2="1296" x1="1648" />
            <wire x2="1840" y1="1296" y2="1296" x1="1648" />
        </branch>
        <branch name="XLXN_7">
            <wire x2="1648" y1="1552" y2="1552" x1="1472" />
            <wire x2="1648" y1="1360" y2="1552" x1="1648" />
            <wire x2="1840" y1="1360" y2="1360" x1="1648" />
        </branch>
        <branch name="XLXN_8">
            <wire x2="2400" y1="1328" y2="1328" x1="2096" />
        </branch>
        <instance x="2400" y="1360" name="XLXI_9" orien="R0" />
        <branch name="Z">
            <wire x2="2800" y1="1328" y2="1328" x1="2624" />
        </branch>
        <iomarker fontsize="28" x="2800" y="1328" name="Z" orien="R0" />
        <instance x="640" y="1088" name="XLXI_10" orien="R0" />
        <instance x="640" y="1344" name="XLXI_11" orien="R0" />
        <instance x="640" y="1616" name="XLXI_12" orien="R0" />
        <branch name="A">
            <wire x2="640" y1="1056" y2="1056" x1="480" />
        </branch>
        <branch name="B">
            <wire x2="640" y1="1312" y2="1312" x1="496" />
        </branch>
        <branch name="C">
            <wire x2="640" y1="1584" y2="1584" x1="496" />
        </branch>
        <iomarker fontsize="28" x="480" y="1056" name="A" orien="R180" />
        <iomarker fontsize="28" x="496" y="1312" name="B" orien="R180" />
        <iomarker fontsize="28" x="496" y="1584" name="C" orien="R180" />
    </sheet>
</drawing>