import cantools, sys

def printDBC():
    dbc = cantools.database.load_file("v68dbcnomultiplex.dbc")
    for m in sorted(dbc.messages, key=lambda x: x.frame_id):
        print(f"0x{m.frame_id:03x}", m.name, m.length, m.comment.replace("\n", "") if m.comment is not None else "")
        for s in m.signals:
            print(f"[{s.start:2},{s.length + s.start-1:2}]", f"{s.unit if s.unit is not None else "None":18}", f"{s.name:18}", s.comment)

if __name__ == '__main__':
    version = sys.argv[1]
    print("version ", version)

    printDBC()